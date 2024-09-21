#include "SBZGameplayAbility_Shout.h"

USBZGameplayAbility_Shout::USBZGameplayAbility_Shout() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
}


