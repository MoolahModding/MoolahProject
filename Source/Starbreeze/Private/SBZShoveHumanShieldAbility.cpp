#include "SBZShoveHumanShieldAbility.h"
#include "ESBZAbilityInput.h"

USBZShoveHumanShieldAbility::USBZShoveHumanShieldAbility() {
    this->Input = ESBZAbilityInput::ShoveHumanShield;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


