#include "SBZGameplayAbility_CharacterTraverse.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterTraverse::USBZGameplayAbility_CharacterTraverse() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Input = ESBZAbilityInput::Jump;
    this->bComputeTrajectoryOnActivationAttempt = true;
    this->MovementComponent = NULL;
}


