#include "SBZMainMenuWeaponModifierScreen.h"

USBZMainMenuWeaponModifierScreen::USBZMainMenuWeaponModifierScreen() {
    this->StackValue = TEXT("Default__SBZMainMenuWeaponModifierScreen");
    this->Panel_WeaponProgressionPartButtons = NULL;
    this->WeaponPartProgressionButtonClass = NULL;
    this->EquippedWeaponProgressionButton = NULL;
    this->Panel_TransactionInProgress = NULL;
    this->PurchaseItemPopUpBodyWidgetClass = NULL;
    this->WeaponPartSlot = NULL;
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->WeaponSlotIndex = 0;
    this->WeaponPartInPurchase = NULL;
    this->SelectedWeaponProgressionButton = NULL;
}

void USBZMainMenuWeaponModifierScreen::SetNewEquippedButton(USBZMainMenuWeaponPartProgressionButton* InEquippedWeaponProgressionButton) {
}


void USBZMainMenuWeaponModifierScreen::SendPurchaseAttemptEvent(const bool bIsAcceptPressed) {
}

void USBZMainMenuWeaponModifierScreen::OnWeaponPartProgressionButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuWeaponModifierScreen::OnWeaponPartProgressionButtonFocusedChanged(USBZMenuButton* InButton, bool bIsFocused) {
}




void USBZMainMenuWeaponModifierScreen::OnPurchaseItemPopUpClosed(FName ClosingActionName) {
}

void USBZMainMenuWeaponModifierScreen::OnPayForAttachItemDone(const ESBZMetaRequestResult BuyWeaponResult, const FGuid ItemId) {
}


bool USBZMainMenuWeaponModifierScreen::InitializeWeaponPartCustomization(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex, const USBZWeaponPartSlot* InWeaponPartSlot) {
    return false;
}

void USBZMainMenuWeaponModifierScreen::GetWeaponSlotInfo(ESBZEquippableLoadoutSlot& OutEquippableSlot, int32& OutWeaponSlotIndex) {
}

USBZWeaponPartSlot* USBZMainMenuWeaponModifierScreen::GetCurrentWeaponPartSlot() const {
    return NULL;
}

void USBZMainMenuWeaponModifierScreen::GetBlockedSlotNamesForWeaponPart(const USBZWeaponPartDataAsset* WeaponPartDataAsset, TArray<FText>& OutSlotNames) {
}


