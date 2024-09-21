#include "SBZKillHumanShieldAbility.h"

USBZKillHumanShieldAbility::USBZKillHumanShieldAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Controller = NULL;
}


