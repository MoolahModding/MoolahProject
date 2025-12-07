#include "SBZFlashbangEffect.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"

USBZFlashbangEffect::USBZFlashbangEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
    this->StackingType = EGameplayEffectStackingType::AggregateByTarget;
}


