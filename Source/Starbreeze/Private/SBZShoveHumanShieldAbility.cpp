#include "SBZShoveHumanShieldAbility.h"
#include "ESBZAbilityInput.h"

USBZShoveHumanShieldAbility::USBZShoveHumanShieldAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ShoveHumanShield;
}


