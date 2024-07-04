#include "SBZTacticianDiscombobulateEffect.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"

USBZTacticianDiscombobulateEffect::USBZTacticianDiscombobulateEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
    this->bExecutePeriodicEffectOnApplication = false;
    this->Modifiers.AddDefaulted(1);
    this->ApplicationRequirements.AddDefaulted(1);
    this->StackingType = EGameplayEffectStackingType::AggregateByTarget;
}


