#include "SBZWeaponCharmSlot.h"

USBZWeaponCharmSlot::USBZWeaponCharmSlot() {
    this->SpawnPriority = 1;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponCharmSlot::StaticClass();
}


