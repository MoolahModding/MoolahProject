#include "SBZMeleeDamageData.h"

USBZMeleeDamageData::USBZMeleeDamageData() {
    this->DamageTypeClass = NULL;
    this->DamageGameplayEffectClass = NULL;
    this->HurtReactionWeightModifier = 0.00f;
    this->HitboxViewRotation = 0.00f;
    this->ArmorPenetration = 0.00f;
    this->PrimaryDamageWeight = ESBZDamageWeight::Stun;
    this->SecondaryDamageWeight = ESBZDamageWeight::Flinch;
    this->DamageWeightModifier = 3.00f;
    this->Cooldown = 5.00f;
    this->MaxTargetsPerHit = 5;
    this->MaximumAngleDifference = 90.00f;
    this->MeleeEvent = NULL;
    this->ImpactType = ESBZMeleeImpactType::Blunt;
    this->AttackCategory = ESBZMeleeAttackCategory::Light;
    this->Duration = 0.00f;
}

