#include "SBZMeleeAbility.h"
#include "ESBZAbilityInput.h"

USBZMeleeAbility::USBZMeleeAbility() {
    this->Character = NULL;
    this->Input = ESBZAbilityInput::Melee;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bRetriggerInstancedAbility = true;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


