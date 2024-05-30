#include "SBZMainMenuLoadoutWeaponSlotButton.h"

USBZMainMenuLoadoutWeaponSlotButton::USBZMainMenuLoadoutWeaponSlotButton() {
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->WeaponSlotIndex = -1;
}



bool USBZMainMenuLoadoutWeaponSlotButton::IsPresetWeaponSlot() const {
    return false;
}

bool USBZMainMenuLoadoutWeaponSlotButton::IsEmpty() const {
    return false;
}

void USBZMainMenuLoadoutWeaponSlotButton::InitializeWeaponSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
}

int32 USBZMainMenuLoadoutWeaponSlotButton::GetWeaponSlotIndex() const {
    return 0;
}

USBZInventoryBaseData* USBZMainMenuLoadoutWeaponSlotButton::GetWeaponInventoryData() const {
    return NULL;
}

int32 USBZMainMenuLoadoutWeaponSlotButton::GetWeaponInSlotLevel() const {
    return 0;
}

USBZEquippableData* USBZMainMenuLoadoutWeaponSlotButton::GetWeaponInSlot() const {
    return NULL;
}

ESBZEquippableLoadoutSlot USBZMainMenuLoadoutWeaponSlotButton::GetEquippableSlot() const {
    return ESBZEquippableLoadoutSlot::PrimaryWeapon;
}

void USBZMainMenuLoadoutWeaponSlotButton::GetEntitlementAndWeaponID(FGuid& EntitlementID, FGuid& ItemID) const {
}


