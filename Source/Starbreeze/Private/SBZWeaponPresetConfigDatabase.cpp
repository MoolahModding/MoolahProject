#include "SBZWeaponPresetConfigDatabase.h"

USBZWeaponPresetConfigDatabase::USBZWeaponPresetConfigDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponPresetConfigDatabase::StaticClass();
}


