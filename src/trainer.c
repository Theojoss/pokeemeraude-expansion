#include "global.h"
#include "data.h"
#include "constants/trainers.h"

static enum TrainerPicID GetEmeraldTrainerPic(enum Gender gender)
{
    u8 outfitId = gSaveBlock2Ptr->currOutfitId;
    if (outfitId == OUTFIT_NONE || outfitId >= OUTFIT_COUNT)
        return gender == MALE ? TRAINER_PIC_BRENDAN : TRAINER_PIC_MAY;
    return gOutfits[outfitId].trainerPics[gender];
}
static enum TrainerPicID GetRSTrainerPic(enum Gender gender)
{
    return gender == MALE ? TRAINER_PIC_RS_BRENDAN : TRAINER_PIC_RS_MAY;
}

static enum TrainerPicID GetKantoTrainerPic(enum Gender gender)
{
    return gender == MALE ? TRAINER_PIC_RED : TRAINER_PIC_LEAF;
}

enum TrainerPicID GetPlayerTrainerPic(enum Gender gender, enum GameVersion version)
{
    switch (version)
    {
        case VERSION_SAPPHIRE:
        case VERSION_RUBY:
            return GetRSTrainerPic(gender);
        case VERSION_LEAF_GREEN:
        case VERSION_FIRE_RED:
            return GetKantoTrainerPic(gender);
        case VERSION_EMERALD:
        default:
            return GetEmeraldTrainerPic(gender);
    }
}
