#include "SBZWeaponPresetConfigData.h"

USBZWeaponPresetConfigData::USBZWeaponPresetConfigData() {
    this->WeaponData = NULL;
}

FSBZEquippableConfig USBZWeaponPresetConfigData::GetEquippableConfig() const {
    return FSBZEquippableConfig{};
}


