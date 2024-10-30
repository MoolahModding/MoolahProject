#include "SBZUseConsumableAbility.h"
#include "ESBZAbilityInput.h"

USBZUseConsumableAbility::USBZUseConsumableAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::UseConsumable;
    this->OwnerCharacter = NULL;
}


