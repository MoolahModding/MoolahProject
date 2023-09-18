#include "SBZWeaponSwayData.h"

USBZWeaponSwayData::USBZWeaponSwayData() {
    this->Alpha = 0.75f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponSwayData::StaticClass();
}


