#include "SBZMainMenuWeaponInventoryWidget.h"

void USBZMainMenuWeaponInventoryWidget::UpdateWeaponSlotButtons() {
}

void USBZMainMenuWeaponInventoryWidget::UpdateActiveWeaponSlotIndex(int32 InNewIndex) {
}

void USBZMainMenuWeaponInventoryWidget::TryBuyItemSlots() {
}








void USBZMainMenuWeaponInventoryWidget::NativeOnWeaponSlotButtonSelected(USBZMenuButton* SelectedButton) {
}

void USBZMainMenuWeaponInventoryWidget::NativeOnBuyWeaponConfigSlotDone(ESBZMetaRequestResult BuyWeaponResult, FGuid ItemId) {
}

int32 USBZMainMenuWeaponInventoryWidget::GetSlotPrice() const {
    return 0;
}

int32 USBZMainMenuWeaponInventoryWidget::GetActiveWeaponSlotIndex() const {
    return 0;
}

bool USBZMainMenuWeaponInventoryWidget::DisplayWeaponSlotScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InLoadoutIndex) {
    return false;
}

bool USBZMainMenuWeaponInventoryWidget::DiscardWeaponInSlot(int32 SlotIndex) {
    return false;
}

void USBZMainMenuWeaponInventoryWidget::DiscardItemDone(ESBZMetaRequestResult BuyItemResult, FGuid ItemId) {
}

bool USBZMainMenuWeaponInventoryWidget::CanDiscardWeaponIndex(int32 IndexToDiscard) const {
    return false;
}

USBZMainMenuWeaponInventoryWidget::USBZMainMenuWeaponInventoryWidget() {
    this->WeaponSlotButtonClass = NULL;
    this->Panel_WeaponSlotButtons = NULL;
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->ActiveWeaponSlots = 0;
    this->WeaponSlotCount = 0;
    this->ActiveWeaponSlotIndex = -1;
    this->LoadoutSlotIndex = -1;
    this->ActiveLoadoutActiveWeaponSlotIndex = -1;
}

