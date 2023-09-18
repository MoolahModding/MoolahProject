#include "SBZAIWeaponMeleeAttackData.h"

USBZAIWeaponMeleeAttackData::USBZAIWeaponMeleeAttackData() {
    this->ArmorPenetration = 0.00f;
    this->DamageInterval[0] = 0.00f;
    this->DamageInterval[1] = 0.00f;
    this->DamageInterval[2] = 0.00f;
    this->DamageInterval[3] = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAIWeaponMeleeAttackData::StaticClass();
}


