#include "SBZSkillHET5AOEDamageAbility.h"

USBZSkillHET5AOEDamageAbility::USBZSkillHET5AOEDamageAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
    this->OwnerAbilitySystem = NULL;
}


