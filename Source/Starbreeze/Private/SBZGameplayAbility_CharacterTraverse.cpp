#include "SBZGameplayAbility_CharacterTraverse.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterTraverse::USBZGameplayAbility_CharacterTraverse() {
    this->bComputeTrajectoryOnActivationAttempt = true;
    this->MovementComponent = NULL;
    this->Input = ESBZAbilityInput::Jump;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}


