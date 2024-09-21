#include "SBZMainMenuWeaponProgressionDisplayWidget.h"

USBZMainMenuWeaponProgressionDisplayWidget::USBZMainMenuWeaponProgressionDisplayWidget() {
    this->WeaponLevel = -1;
    this->MaxWeaponLevel = -1;
    this->CurrentWeaponXP = -1;
    this->WeaponXPAtNextLevel = -1;
    this->WeaponLevelProgression = -1.00f;
    this->BaseItemData = NULL;
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->WeaponSlotIndex = -1;
    this->MaxModifierSlots = -1;
}

void USBZMainMenuWeaponProgressionDisplayWidget::UpdateWeaponVisuals(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
}

void USBZMainMenuWeaponProgressionDisplayWidget::UpdateBaseWeaponVisuals(const USBZBaseWeaponData* InBaseWeaponData) {
}

void USBZMainMenuWeaponProgressionDisplayWidget::SetEmpty() {
}




void USBZMainMenuWeaponProgressionDisplayWidget::InitilizeWithBaseInventoryData(const USBZInventoryBaseData* InBaseData) {
}


