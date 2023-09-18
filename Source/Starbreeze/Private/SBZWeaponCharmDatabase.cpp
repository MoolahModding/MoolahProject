#include "SBZWeaponCharmDatabase.h"

USBZWeaponCharmDatabase::USBZWeaponCharmDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponCharmDatabase::StaticClass();
}


