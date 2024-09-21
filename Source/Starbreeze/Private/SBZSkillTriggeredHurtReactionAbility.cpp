#include "SBZSkillTriggeredHurtReactionAbility.h"

USBZSkillTriggeredHurtReactionAbility::USBZSkillTriggeredHurtReactionAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->OwnerPlayer = NULL;
}


