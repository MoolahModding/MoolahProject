#include "SBZMainMenuWeaponInventoryScreen.h"



void USBZMainMenuWeaponInventoryScreen::UpdateWeaponSlotButtons() {
}

void USBZMainMenuWeaponInventoryScreen::UpdateActiveWeaponSlotIndex(int32 InNewIndex) {
}

bool USBZMainMenuWeaponInventoryScreen::TryDiscardWeaponInIndex(int32 SlotIndex) {
    return false;
}

void USBZMainMenuWeaponInventoryScreen::TryBuyWeaponSlot(USBZMenuButton* InSelectedButton) {
}




void USBZMainMenuWeaponInventoryScreen::OnShowBuySlotPopUpClosed(FName InActionName) {
}


void USBZMainMenuWeaponInventoryScreen::OnDiscardWeaponPopUpClosed(FName ClosingActionName) {
}


void USBZMainMenuWeaponInventoryScreen::OnBuyWeaponSlotItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId) {
}


void USBZMainMenuWeaponInventoryScreen::NativeOnWeaponSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData) {
}

void USBZMainMenuWeaponInventoryScreen::NativeOnWeaponSlotButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuWeaponInventoryScreen::HandleProgressionSave(ESBZMetaRequestResult Result) {
}

bool USBZMainMenuWeaponInventoryScreen::DisplayWeaponInventoryScreen(int32 InLoadoutIndex, ESBZEquippableLoadoutSlot InEquippableSlot) {
    return false;
}

void USBZMainMenuWeaponInventoryScreen::DiscardItemDone(ESBZMetaRequestResult BuyItemResult, FGuid ItemId) {
}

bool USBZMainMenuWeaponInventoryScreen::CanDiscardWeaponIndex(int32 InWeaponIndex) const {
    return false;
}

USBZMainMenuWeaponInventoryScreen::USBZMainMenuWeaponInventoryScreen() {
    this->WeaponSlotButtonClass = NULL;
    this->Panel_WeaponSlotButtons = NULL;
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->CurrentLoadoutIndex = -1;
    this->ActiveWeaponSlotIndex = -1;
    this->ActiveLoadoutWeaponSlotIndex = -1;
    this->ActiveWeaponSlots = 0;
    this->WeaponSlotCount = 0;
    this->Button_WeaponSlotStoreItem = NULL;
    this->DiscardWeaponPopUpBodyWidgetClass = NULL;
    this->WeaponToDiscardIndex = -1;
    this->DiscardWeaponPopUpBody = NULL;
}

