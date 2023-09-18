#include "SBZThrowItemAbility.h"
#include "ESBZAbilityInput.h"

USBZThrowItemAbility::USBZThrowItemAbility() {
    this->OwnerCharacter = NULL;
    this->Input = ESBZAbilityInput::ThrowItem;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


