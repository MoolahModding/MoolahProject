#include "SBZMeleeWeaponData.h"

USBZMeleeWeaponData::USBZMeleeWeaponData() {
    this->MeleeAttackData = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMeleeWeaponData::StaticClass();
}


