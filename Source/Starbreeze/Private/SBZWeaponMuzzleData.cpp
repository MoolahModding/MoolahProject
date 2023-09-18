#include "SBZWeaponMuzzleData.h"

USBZWeaponMuzzleData::USBZWeaponMuzzleData() {
    this->SuppressorStrength = ESBZMuzzleSuppressor::None;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponMuzzleData::StaticClass();
}


