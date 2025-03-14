#include "SBZTickOverskillBaseAbility.h"

USBZTickOverskillBaseAbility::USBZTickOverskillBaseAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->OwnerPlayerState = NULL;
    this->OverskillData = NULL;
    this->OriginalOverskillData = NULL;
}


