#include "SBZWeaponPresetConfigData.h"

FSBZEquippableConfig USBZWeaponPresetConfigData::GetEquippableConfig() const {
    return FSBZEquippableConfig{};
}

USBZWeaponPresetConfigData::USBZWeaponPresetConfigData() {
    this->WeaponData = NULL;
}

