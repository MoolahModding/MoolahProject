#include "SBZHackerBaseAbility.h"

USBZHackerBaseAbility::USBZHackerBaseAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


