#include "SBZRequestOverkillBaseAbility.h"
#include "ESBZAbilityInput.h"

USBZRequestOverkillBaseAbility::USBZRequestOverkillBaseAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::RequestOverkillWeapon;
}


