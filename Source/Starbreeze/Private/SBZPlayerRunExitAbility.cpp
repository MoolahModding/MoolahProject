#include "SBZPlayerRunExitAbility.h"

USBZPlayerRunExitAbility::USBZPlayerRunExitAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
}


