#include "SBZGateExplosionData.h"

FSBZGateExplosionData::FSBZGateExplosionData() {
    this->bIsCalculated = false;
    this->CalculatedClosePaddingX = 0.00f;
    this->GameplayEffectClass = NULL;
    this->PlayerImpulse = 0.00f;
    this->DamageWeight = ESBZDamageWeight::Flinch;
    this->DamageWeightModifier = 0.00f;
}

