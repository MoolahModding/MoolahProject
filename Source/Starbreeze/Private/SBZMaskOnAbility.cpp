#include "SBZMaskOnAbility.h"

USBZMaskOnAbility::USBZMaskOnAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
}


