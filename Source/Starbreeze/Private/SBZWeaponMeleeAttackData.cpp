#include "SBZWeaponMeleeAttackData.h"
#include "SBZMeleeDamageType.h"
#include "SBZMeleeWeaponEffect.h"

USBZWeaponMeleeAttackData::USBZWeaponMeleeAttackData() {
    this->DamageTypeClass = USBZMeleeDamageType::StaticClass();
    this->TargetEffectClass = USBZMeleeWeaponEffect::StaticClass();
}


