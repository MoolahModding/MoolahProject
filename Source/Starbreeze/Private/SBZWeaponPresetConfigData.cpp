#include "SBZWeaponPresetConfigData.h"

USBZWeaponPresetConfigData::USBZWeaponPresetConfigData() {
    this->WeaponData = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponPresetConfigData::StaticClass();
}

FSBZEquippableConfig USBZWeaponPresetConfigData::GetEquippableConfig() const {
    return FSBZEquippableConfig{};
}


