#include "SBZWeaponMeleeAttackData.h"
#include "SBZMeleeDamageType.h"
#include "SBZMeleeWeaponEffect.h"

USBZWeaponMeleeAttackData::USBZWeaponMeleeAttackData() {
    this->DamageTypeClass = USBZMeleeDamageType::StaticClass();
    this->TargetEffectClass = USBZMeleeWeaponEffect::StaticClass();
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponMeleeAttackData::StaticClass();
}


