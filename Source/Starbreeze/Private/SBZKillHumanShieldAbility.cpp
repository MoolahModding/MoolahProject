#include "SBZKillHumanShieldAbility.h"

USBZKillHumanShieldAbility::USBZKillHumanShieldAbility() {
    this->Controller = NULL;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


