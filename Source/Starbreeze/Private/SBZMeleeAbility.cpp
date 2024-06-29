#include "SBZMeleeAbility.h"
#include "ESBZAbilityInput.h"

USBZMeleeAbility::USBZMeleeAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bRetriggerInstancedAbility = true;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::Melee;
    this->Character = NULL;
}


