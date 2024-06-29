#include "SBZExitPhoneAbility.h"

USBZExitPhoneAbility::USBZExitPhoneAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->ViewTargetActor = NULL;
    this->OwnerCharacter = NULL;
}


