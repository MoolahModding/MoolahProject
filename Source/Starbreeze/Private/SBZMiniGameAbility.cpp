#include "SBZMiniGameAbility.h"

USBZMiniGameAbility::USBZMiniGameAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->WinningParticipant = NULL;
}


