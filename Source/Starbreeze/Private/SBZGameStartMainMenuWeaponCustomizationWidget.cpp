#include "SBZGameStartMainMenuWeaponCustomizationWidget.h"

USBZGameStartMainMenuWeaponCustomizationWidget::USBZGameStartMainMenuWeaponCustomizationWidget() {
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->WeaponSlotIndex = -1;
    this->StackValue = TEXT("Default__SBZGameStartMainMenuWeaponCustomizationWidget");
}

void USBZGameStartMainMenuWeaponCustomizationWidget::UpdateEquippableConfig(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
}

void USBZGameStartMainMenuWeaponCustomizationWidget::GetCurrentWeaponSlotData(ESBZEquippableLoadoutSlot& OutEquippableSlot, int32& OutWeaponSlotIndex) {
}

bool USBZGameStartMainMenuWeaponCustomizationWidget::CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return false;
}


