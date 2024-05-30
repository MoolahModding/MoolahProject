#include "SBZMainMenuItemInventoryWidget.h"

USBZMainMenuItemInventoryWidget::USBZMainMenuItemInventoryWidget() {
    this->StackValue = TEXT("Default__SBZMainMenuItemInventoryWidget");
    this->ItemSlotButtonClass = NULL;
    this->Panel_ItemSlotButtons = NULL;
    this->ItemSlotType = ESBZItemLoadoutSlot::Armour;
    this->SelectedItemButton = NULL;
}




void USBZMainMenuItemInventoryWidget::NativeOnItemSlotButtonSelected(USBZMenuButton* SelectedButton) {
}

USBZInventoryBaseData* USBZMainMenuItemInventoryWidget::GetActiveItem() const {
    return NULL;
}

bool USBZMainMenuItemInventoryWidget::DisplayItemSlotScreen(ESBZItemLoadoutSlot InItemSlotType, USBZInventoryBaseData* InActiveItem) {
    return false;
}


