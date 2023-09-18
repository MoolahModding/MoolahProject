#include "SBZWeaponAmmoData.h"

USBZWeaponAmmoData::USBZWeaponAmmoData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponAmmoData::StaticClass();
}


