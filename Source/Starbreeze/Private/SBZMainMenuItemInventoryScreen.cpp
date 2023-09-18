#include "SBZMainMenuItemInventoryScreen.h"

USBZMainMenuItemInventoryScreen::USBZMainMenuItemInventoryScreen() {
    this->ItemSlotButtonClass = NULL;
    this->ItemSlotButtonClass = NULL;
    this->Panel_ItemSlotButtons = NULL;
    this->CurrentLoadoutIndex = -1;
    this->ItemSlotType = ESBZItemLoadoutSlot::Armour;
    this->SelectedItemButton = NULL;
    this->StackValue = TEXT("Default__SBZMainMenuItemInventoryScreen");
}





void USBZMainMenuItemInventoryScreen::NativeOnItemSlotButtonSelected(USBZMenuButton* SelectedButton) {
}

void USBZMainMenuItemInventoryScreen::HandleProgressionSave(ESBZMetaRequestResult Result) {
}

USBZInventoryBaseData* USBZMainMenuItemInventoryScreen::GetActiveItem() const {
    return NULL;
}

bool USBZMainMenuItemInventoryScreen::DisplayItemInventoryScreen(int32 InLoadoutIndex, ESBZItemLoadoutSlot InItemSlotType) {
    return false;
}


