#include "SBZThrowItemAbility.h"
#include "ESBZAbilityInput.h"

USBZThrowItemAbility::USBZThrowItemAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ThrowItem;
    this->OwnerCharacter = NULL;
    this->Throwable = NULL;
}


