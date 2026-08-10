// Species-specific overworld sprites shown while surfing, for a curated list of
// species (falls back to the normal surf blob for everyone else).
// Sprite art credit: slawter666, wally-217 ("Unique Surfing Overworlds",
// https://www.pokecommunity.com/threads/unique-surfing-overworlds.415063/),
// ported via https://github.com/PokemonHnS-Development/pokemonHnS.
#include "global.h"
#include "event_object_movement.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_move.h"
#include "field_player_avatar.h"
#include "field_weather.h"
#include "main.h"
#include "pokemon.h"
#include "sprite.h"
#include "surfable.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/species.h"

extern const struct OamData gObjectEventBaseOam_32x32;
extern const struct OamData gObjectEventBaseOam_64x64;
extern const struct SpriteTemplate *const gFieldEffectObjectTemplatePointers[];

struct RideablePokemon
{
    enum Species species;
    u8 trainerPose;
};

static EWRAM_DATA u16 sCurrentSurfMon = 0;

static void CreateOverlaySprite(bool8 isShiny);
static void UpdateSurfMonOverlay(struct Sprite *sprite);

#include "data/object_events/surfable/surfable_pokemon_graphics.h"
#include "data/object_events/surfable/surfable_pokemon_pic_tables.h"
#include "data/object_events/surfable/surfable_pokemon_templates.h"
#include "data/object_events/surfable/surfable_pokemon.h"

static u16 GetSurfablePokemonIndex(enum Species species)
{
    u16 i;

    for (i = 0; i < ARRAY_COUNT(gSurfablePokemon); i++)
    {
        if (species == gSurfablePokemon[i].species)
            return i;
    }
    return 0xFFFF;
}

u32 CreateSurfablePokemonSprite(void)
{
    u8 spriteId;
    u8 partyIndex;
    enum Species species;
    bool8 isShiny = FALSE;

    SetSpritePosToOffsetMapCoords((s16 *)&gFieldEffectArguments[0], (s16 *)&gFieldEffectArguments[1], 8, 8);

    if (FieldMove_TryGetPartyUser(FIELD_MOVE_SURF, &partyIndex, &species))
    {
        sCurrentSurfMon = GetSurfablePokemonIndex(species);
        isShiny = IsMonShiny(&gParties[B_TRAINER_PLAYER][partyIndex]);
    }
    else
    {
        sCurrentSurfMon = 0xFFFF;
    }

    if (sCurrentSurfMon != 0xFFFF)
    {
        u8 paletteNum;
        if (isShiny)
        {
            paletteNum = LoadSpritePalette(&sSurfablePokemonShinyPalettes[sCurrentSurfMon]);
            spriteId = CreateSpriteAtEnd(&gSurfablePokemonOverworldShinySprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], 150);
        }
        else
        {
            paletteNum = LoadSpritePalette(&sSurfablePokemonPalettes[sCurrentSurfMon]);
            spriteId = CreateSpriteAtEnd(&gSurfablePokemonOverworldSprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], 150);
        }
        UpdateSpritePaletteWithWeather(paletteNum, TRUE);

        if (spriteId != MAX_SPRITES)
            gSprites[spriteId].oam.paletteNum = paletteNum;

        if (gSurfablePokemonOverlaySprites[sCurrentSurfMon].images != NULL)
            CreateOverlaySprite(isShiny);
    }
    else
    {
        spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_SURF_BLOB], gFieldEffectArguments[0], gFieldEffectArguments[1], 150);
        if (spriteId != MAX_SPRITES)
            gSprites[spriteId].oam.paletteNum = LoadPlayerObjectEventPalette(gSaveBlock2Ptr->playerGender);
    }

    if (spriteId != MAX_SPRITES)
    {
        struct Sprite *sprite = &gSprites[spriteId];
        sprite->coordOffsetEnabled = TRUE;
        sprite->data[2] = gFieldEffectArguments[2];
        sprite->data[3] = -1;
        sprite->data[6] = -1;
        sprite->data[7] = -1;
    }
    FieldEffectActiveListRemove(FLDEFF_SURF_BLOB);
    return spriteId;
}

static void CreateOverlaySprite(bool8 isShiny)
{
    u8 overlaySprite;
    u8 subpriority = gSprites[gPlayerAvatar.spriteId].subpriority - 1;

    if (isShiny)
        overlaySprite = CreateSpriteAtEnd(&gSurfablePokemonOverlayShinySprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], subpriority);
    else
        overlaySprite = CreateSpriteAtEnd(&gSurfablePokemonOverlaySprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], subpriority);

    if (overlaySprite != MAX_SPRITES)
    {
        struct Sprite *sprite = &gSprites[overlaySprite];
        sprite->coordOffsetEnabled = TRUE;
        sprite->data[2] = gFieldEffectArguments[2];
        sprite->data[3] = -1;
        sprite->data[6] = -1;
        sprite->data[7] = -1;
        sprite->oam.priority = 2;
        sprite->oam.paletteNum = isShiny ? IndexOfSpritePaletteTag(sSurfablePokemonShinyPalettes[sCurrentSurfMon].tag)
                                          : IndexOfSpritePaletteTag(sSurfablePokemonPalettes[sCurrentSurfMon].tag);
    }
}

static void UpdateSurfMonOverlay(struct Sprite *sprite)
{
    struct ObjectEvent *playerObj = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct Sprite *linkedSprite = &gSprites[playerObj->spriteId];

    SynchronizeSurfAnim(playerObj, sprite);
    SynchronizeSurfPosition(playerObj, sprite);

    if (linkedSprite->animNum < MOVEMENT_ACTION_DELAY_16)
    {
        sprite->x = linkedSprite->x;
        sprite->y = linkedSprite->y + 8;
        sprite->y2 = linkedSprite->y2;
    }
    sprite->subpriority = gSprites[gPlayerAvatar.spriteId].subpriority - 1;

    if (!(gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_SURFING))
        DestroySprite(sprite);
}
