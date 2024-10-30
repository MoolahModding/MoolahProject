#include "SBZARGESTargetAbility.h"
#include "ESBZAbilityInput.h"

USBZARGESTargetAbility::USBZARGESTargetAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->bIsCancelOnInputReleased = true;
    this->Input = ESBZAbilityInput::Targeting;
}


