#include "SBZSkillGrazeAOEDamageAbility.h"

USBZSkillGrazeAOEDamageAbility::USBZSkillGrazeAOEDamageAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
    this->OwnerAbilitySystem = NULL;
}


