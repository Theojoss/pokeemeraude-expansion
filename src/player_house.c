#include "global.h"
#include "constants/event_objects.h"
#include "constants/field_weather.h"
#include "constants/flags.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_weather.h"
#include "main.h"
#include "overworld.h"
#include "party_menu.h"
#include "player_house.h"
#include "pokemon.h"
#include "script.h"
#include "outfit_menu.h"
#include "task.h"

static void SpawnHouse1PetObjectEvent(void)
{
    u8 objectEventId;

    if (gSaveBlock1Ptr->house1PetGraphicsId == 0)
        return;

    for (objectEventId = 0; objectEventId < gMapHeader.events->objectEventCount; objectEventId++)
    {
        if (gMapHeader.events->objectEvents[objectEventId].flagId == FLAG_HOUSE_1_PET_HIDDEN)
            break;
    }

    if (objectEventId == gMapHeader.events->objectEventCount)
        return;

    VarSet(VAR_OBJ_GFX_ID_0 + (gMapHeader.events->objectEvents[objectEventId].graphicsId - OBJ_EVENT_GFX_VAR_0), gSaveBlock1Ptr->house1PetGraphicsId);
    FlagClear(FLAG_HOUSE_1_PET_HIDDEN);
    TrySpawnObjectEvent(gMapHeader.events->objectEvents[objectEventId].localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
}

void InitHouse1PetSprite(void)
{
    SpawnHouse1PetObjectEvent();
}

void ChooseMonForHouse1Pet(void)
{
    ChooseMonForDaycare();
    gMain.savedCallback = CB2_ReturnToField;
}

void SetHouse1ResidentMon(void)
{
    struct Pokemon *mon = &gPlayerParty[gSpecialVar_0x8004];
    u16 species = GetMonData(mon, MON_DATA_SPECIES);
    u16 graphicsId = species | OBJ_EVENT_MON;

    if (IsMonShiny(mon))
        graphicsId |= OBJ_EVENT_MON_SHINY;
    if (GetMonGender(mon) == MON_FEMALE)
        graphicsId |= OBJ_EVENT_MON_FEMALE;

    gSaveBlock1Ptr->house1PetGraphicsId = graphicsId;
    FlagSet(FLAG_HOUSE_1_HAS_PET);
    SpawnHouse1PetObjectEvent();
}

void RemoveHouse1ResidentMon(void)
{
    gSaveBlock1Ptr->house1PetGraphicsId = 0;
    FlagClear(FLAG_HOUSE_1_HAS_PET);
    FlagSet(FLAG_HOUSE_1_PET_HIDDEN);
}

void OpenHouseOutfitMenu(void)
{
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_OpenOutfitMenu, 0);
}
