#ifndef GUARD_FIELD_MOVE_H
#define GUARD_FIELD_MOVE_H

#include "global.h"
#include "constants/field_move.h"

struct FieldMoveInfo
{
    bool32 (*fieldMoveFunc)(void);
    bool32 (*isUnlockedFunc)(void);
    u16 moveID;
    u8 partyMsgID;
    // The "HM received" save flag for this field move, or 0 if not applicable.
    u16 receivedFlag;
    // Once receivedFlag is set, the field move can be triggered on the overworld
    // (e.g. in front of a tree, or when approaching water) by any party Pokémon
    // whose species is capable of learning the move, whether or not it currently
    // knows it.
    bool8 overworldCapabilityCheck;
    // Once receivedFlag is set, the move appears (and can be used) in a capable
    // party Pokémon's field-selection menu even if it doesn't currently know it.
    bool8 menuCapabilityCheck;
};

extern const struct FieldMoveInfo gFieldMoveInfo[];

static inline bool32 SetUpFieldMove(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].fieldMoveFunc();
}

static inline bool32 IsFieldMoveUnlocked(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].isUnlockedFunc();
}

static inline u32 FieldMove_GetMoveId(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].moveID;
}

static inline u32 FieldMove_GetPartyMsgID(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].partyMsgID;
}

static inline u16 FieldMove_GetReceivedFlag(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].receivedFlag;
}

static inline bool32 FieldMove_HasMenuCapabilityCheck(enum FieldMove fieldMove)
{
    return gFieldMoveInfo[fieldMove].menuCapabilityCheck;
}

bool32 FieldMove_TryGetPartyUser(enum FieldMove fieldMove, u8 *partyIndex, enum Species *species);

#endif //GUARD_FIELD_MOVE_H
