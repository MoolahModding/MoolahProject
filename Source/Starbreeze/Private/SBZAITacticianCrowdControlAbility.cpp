#include "SBZAITacticianCrowdControlAbility.h"

USBZAITacticianCrowdControlAbility::USBZAITacticianCrowdControlAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->AICharacter = NULL;
    this->Controller = NULL;
}


