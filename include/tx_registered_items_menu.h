#ifndef GUARD_REGISTERED_ITEMS_MENU
#define GUARD_REGISTERED_ITEMS_MENU

struct TxRegItemsMenu_ItemPageStruct
{
    u16 cursorPos;
    u16 itemsAbove;
    u8 pageItems;
    u8 count;
    u8 filler[3];
    u8 scrollIndicatorTaskId;
};

void TxRegItemsMenu_RegisteredItemsMenuNewGame(void);
void TxRegItemsMenu_OpenMenu(void);
u8 TxRegItemsMenu_CountUsedRegisteredItemSlots(void);
void TxRegItemsMenu_RemoveRegisteredItem(enum Item itemId);
void TxRegItemsMenu_CompactRegisteredItems(void);
bool8 TxRegItemsMenu_AddRegisteredItem(enum Item itemId);
bool8 TxRegItemsMenu_CheckRegisteredHasItem(enum Item itemId);
u8 TxRegItemsMenu_GetRegisteredItemIndex(enum Item itemId);

#endif //GUARD_REGISTERED_ITEMS_MENU
