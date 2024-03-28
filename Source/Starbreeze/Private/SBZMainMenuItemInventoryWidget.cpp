#include "SBZMainMenuItemInventoryWidget.h"




void USBZMainMenuItemInventoryWidget::NativeOnItemSlotButtonSelected(USBZMenuButton* SelectedButton) {
}

USBZInventoryBaseData* USBZMainMenuItemInventoryWidget::GetActiveItem() const {
    return NULL;
}

bool USBZMainMenuItemInventoryWidget::DisplayItemSlotScreen(ESBZItemLoadoutSlot InItemSlotType, USBZInventoryBaseData* InActiveItem) {
    return false;
}

USBZMainMenuItemInventoryWidget::USBZMainMenuItemInventoryWidget() {
    this->ItemSlotButtonClass = NULL;
    this->Panel_ItemSlotButtons = NULL;
    this->ItemSlotType = ESBZItemLoadoutSlot::Armour;
    this->SelectedItemButton = NULL;
}

