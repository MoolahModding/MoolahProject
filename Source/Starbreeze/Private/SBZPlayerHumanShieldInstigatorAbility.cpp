#include "SBZPlayerHumanShieldInstigatorAbility.h"

USBZPlayerHumanShieldInstigatorAbility::USBZPlayerHumanShieldInstigatorAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


