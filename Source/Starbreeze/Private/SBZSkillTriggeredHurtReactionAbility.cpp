#include "SBZSkillTriggeredHurtReactionAbility.h"

USBZSkillTriggeredHurtReactionAbility::USBZSkillTriggeredHurtReactionAbility() {
    this->OwnerPlayer = NULL;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


