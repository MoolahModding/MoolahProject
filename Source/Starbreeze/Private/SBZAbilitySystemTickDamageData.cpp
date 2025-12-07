#include "SBZAbilitySystemTickDamageData.h"

FSBZAbilitySystemTickDamageData::FSBZAbilitySystemTickDamageData() {
    this->Duration = 0.00f;
    this->UpdateTime = 0.00f;
    this->DamagePerSecond = 0.00f;
    this->DamageTypeClass = NULL;
    this->InstigatorNetID = 0;
    this->Instigator = NULL;
    this->InstigatorAbilitySystem = NULL;
}

