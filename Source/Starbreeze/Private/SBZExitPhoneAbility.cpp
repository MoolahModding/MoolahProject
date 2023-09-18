#include "SBZExitPhoneAbility.h"

USBZExitPhoneAbility::USBZExitPhoneAbility() {
    this->ViewTargetActor = NULL;
    this->OwnerCharacter = NULL;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
}


