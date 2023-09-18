#include "SBZMainMenuWeaponSlotInventoryWidget.h"

USBZMainMenuWeaponSlotInventoryWidget::USBZMainMenuWeaponSlotInventoryWidget() {
    this->WeaponSlotButtonClass = NULL;
    this->WeaponSlotButtonClass = NULL;
    this->Panel_WeaponSlotButtons = NULL;
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->ActiveWeaponSlotIndex = -1;
    this->ActiveLoadoutWeaponSlotIndex = -1;
    this->ActiveWeaponSlots = 0;
    this->WeaponSlotCount = 0;
    this->Button_WeaponSlotStoreItem = NULL;
}



void USBZMainMenuWeaponSlotInventoryWidget::UpdateActiveWeaponSlotIndex(int32 InNewIndex) {
}



void USBZMainMenuWeaponSlotInventoryWidget::NativeOnWeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData) {
}

void USBZMainMenuWeaponSlotInventoryWidget::NativeOnWeaponSlotButtonSelected(USBZMenuButton* InSelectedButton) {
}

bool USBZMainMenuWeaponSlotInventoryWidget::DisplayWeaponSlotScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InSetActiveWeaponIndex) {
    return false;
}

bool USBZMainMenuWeaponSlotInventoryWidget::DiscardWeaponInSlot(int32 SlotIndex) {
    return false;
}

void USBZMainMenuWeaponSlotInventoryWidget::DiscardItemDone(ESBZMetaRequestResult BuyItemResult, FGuid ItemId) {
}

bool USBZMainMenuWeaponSlotInventoryWidget::CanDiscardWeaponIndex(int32 IndexToDiscard) const {
    return false;
}


