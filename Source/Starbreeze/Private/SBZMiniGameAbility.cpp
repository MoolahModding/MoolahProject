#include "SBZMiniGameAbility.h"

USBZMiniGameAbility::USBZMiniGameAbility() {
    this->WinningParticipant = NULL;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


