#include "SBZLandingAbility.h"

USBZLandingAbility::USBZLandingAbility() {
    this->OwnerCharacter = NULL;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->AbilityTriggers.AddDefaulted(1);
}


