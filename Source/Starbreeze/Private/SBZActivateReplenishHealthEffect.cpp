#include "SBZActivateReplenishHealthEffect.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"

USBZActivateReplenishHealthEffect::USBZActivateReplenishHealthEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
    this->RoutineExpirationEffectClasses.AddDefaulted(1);
    this->StackingType = EGameplayEffectStackingType::AggregateByTarget;
}


