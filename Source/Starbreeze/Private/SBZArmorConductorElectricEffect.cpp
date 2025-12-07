#include "SBZArmorConductorElectricEffect.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"

USBZArmorConductorElectricEffect::USBZArmorConductorElectricEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
    this->bExecutePeriodicEffectOnApplication = false;
    this->Modifiers.AddDefaulted(1);
    this->StackingType = EGameplayEffectStackingType::AggregateByTarget;
}


