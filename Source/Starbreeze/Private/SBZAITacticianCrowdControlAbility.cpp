#include "SBZAITacticianCrowdControlAbility.h"

USBZAITacticianCrowdControlAbility::USBZAITacticianCrowdControlAbility() {
    this->AICharacter = NULL;
    this->Controller = NULL;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(1);
}


