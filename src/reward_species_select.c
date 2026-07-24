#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "international_string_util.h"
#include "main.h"
#include "map_name_popup.h"
#include "menu.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "reward_species_select.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "window.h"
#include "constants/songs.h"

#define REWARD_SPECIES_WINDOW_WIDTH  10
#define REWARD_SPECIES_WINDOW_HEIGHT 4
#define REWARD_SPECIES_FONT          FONT_NORMAL
#define REWARD_SPECIES_ICON_X        210
#define REWARD_SPECIES_ICON_Y        50
#define REWARD_SPECIES_DIGITS        4

extern const u8 *const gText_DigitIndicator[];

static const struct WindowTemplate sRewardSpeciesWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 30 - REWARD_SPECIES_WINDOW_WIDTH - 1,
    .tilemapTop = 1,
    .width = REWARD_SPECIES_WINDOW_WIDTH,
    .height = 2 * REWARD_SPECIES_WINDOW_HEIGHT,
    .paletteNum = 15,
    .baseBlock = 1,
};

static const s32 sRewardSpeciesPowersOfTen[REWARD_SPECIES_DIGITS] = {1, 10, 100, 1000};

#define tWindowId  data[0]
#define tInput     data[1]
#define tDigit     data[2]
#define tSpriteId  data[3]

// Excludes battle-only transformed forms (Mega, Primal, Ultra Burst, Gigantamax,
// Tera form) from the reward pool — the player should only ever be able to walk
// away with a species they could otherwise own permanently.
static bool32 IsSpeciesTransformedForm(enum Species species)
{
    return gSpeciesInfo[species].isMegaEvolution
        || gSpeciesInfo[species].isPrimalReversion
        || gSpeciesInfo[species].isUltraBurst
        || gSpeciesInfo[species].isGigantamax
        || gSpeciesInfo[species].isTeraForm;
}

static void RewardSpeciesSelect_Display(enum Species species, u32 number, u32 digit, u8 windowId)
{
    u8 *end;

    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    if (!IsSpeciesEnabled(species))
    {
        species = SPECIES_NONE;
        end = StringCopy(gStringVar1, COMPOUND_STRING("Pokémon Désactivé"));
    }
    else if (IsSpeciesTransformedForm(species))
    {
        species = SPECIES_NONE;
        end = StringCopy(gStringVar1, COMPOUND_STRING("Forme de Combat"));
    }
    else
    {
        end = StringCopy(gStringVar1, GetSpeciesName(species));
    }
    WrapFontIdToFit(gStringVar1, end, REWARD_SPECIES_FONT, WindowWidthPx(windowId));
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    ConvertIntToDecimalStringN(gStringVar3, number, STR_CONV_MODE_LEADING_ZEROS, REWARD_SPECIES_DIGITS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Pokémon: {STR_VAR_3}\n{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, REWARD_SPECIES_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void RewardSpeciesSelect_RefreshIcon(u8 taskId, enum Species species)
{
    FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].tSpriteId]);
    FreeMonIconPalettes();
    LoadMonIconPalettePersonality(species, 0);
    gTasks[taskId].tSpriteId = CreateMonIcon(species, SpriteCB_MonIcon, REWARD_SPECIES_ICON_X, REWARD_SPECIES_ICON_Y, 4, 0);
    gSprites[gTasks[taskId].tSpriteId].oam.priority = 0;
}

static void Task_RewardSpeciesSelect_Input(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        s32 input = gTasks[taskId].tInput;
        u32 digit = gTasks[taskId].tDigit;
        enum Species species;

        PlaySE(SE_SELECT);
        if (JOY_NEW(DPAD_UP))
        {
            input += sRewardSpeciesPowersOfTen[digit];
            if (input > NUM_SPECIES - 1)
                input = NUM_SPECIES - 1;
        }
        if (JOY_NEW(DPAD_DOWN))
        {
            input -= sRewardSpeciesPowersOfTen[digit];
            if (input < 1)
                input = 1;
        }
        if (JOY_NEW(DPAD_LEFT) && digit > 0)
            digit--;
        if (JOY_NEW(DPAD_RIGHT) && digit < REWARD_SPECIES_DIGITS - 1)
            digit++;

        gTasks[taskId].tInput = input;
        gTasks[taskId].tDigit = digit;

        species = input;
        if (!IsSpeciesEnabled(species) || IsSpeciesTransformedForm(species))
            species = SPECIES_NONE;
        RewardSpeciesSelect_Display(species, input, digit, gTasks[taskId].tWindowId);
        RewardSpeciesSelect_RefreshIcon(taskId, species);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        if (!IsSpeciesEnabled(gTasks[taskId].tInput) || IsSpeciesTransformedForm(gTasks[taskId].tInput))
        {
            PlaySE(SE_FAILURE);
            return;
        }

        gSpecialVar_0x8004 = gTasks[taskId].tInput;
        PlaySE(SE_SELECT);
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].tSpriteId]);
        FreeMonIconPalettes();
        ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
        RemoveWindow(gTasks[taskId].tWindowId);
        DestroyTask(taskId);
        UnfreezeObjectEvents();
        ScriptContext_Enable();
    }
}

void ChooseSpeciesForEggReward(void)
{
    u8 taskId, windowId;
    enum Species species = SPECIES_BULBASAUR;

    FreezeObjectEvents();
    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sRewardSpeciesWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);
    CopyWindowToVram(windowId, COPYWIN_FULL);

    RewardSpeciesSelect_Display(species, species, 0, windowId);

    taskId = CreateTask(Task_RewardSpeciesSelect_Input, 3);
    gTasks[taskId].tWindowId = windowId;
    gTasks[taskId].tInput = species;
    gTasks[taskId].tDigit = 0;

    FreeMonIconPalettes();
    LoadMonIconPalettePersonality(species, 0);
    gTasks[taskId].tSpriteId = CreateMonIcon(species, SpriteCB_MonIcon, REWARD_SPECIES_ICON_X, REWARD_SPECIES_ICON_Y, 4, 0);
    gSprites[gTasks[taskId].tSpriteId].oam.priority = 0;
}
