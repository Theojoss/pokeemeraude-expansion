#ifndef GUARD_OUTFIT_MENU_H
#define GUARD_OUTFIT_MENU_H

void OpenOutfitMenu(MainCallback retCB);
void Task_OpenOutfitMenu(u8 taskId);

// misc funcs
void BufferOutfitStrings(u8 *dest, u8 outfitId, u8 dataType);
u16 GetPlayerTrainerPicIdByOutfit(u16 outfitId, u8 gender);
u8 *GetOutfitPointer(u16 id);
u16 UnlockOutfit(u16 id);
u16 ToggleOutfit(u16 id);
u16 LockOutfit(u16 id);
bool8 GetOutfitStatus(u16 id);
bool8 IsPlayerWearingOutfit(u16 id);
u32 GetOutfitPrice(u16 id);
void SetCurrentOutfitGfxIntoVar(struct ScriptContext *ctx);

#endif // GUARD_OUTFIT_MENU_H
