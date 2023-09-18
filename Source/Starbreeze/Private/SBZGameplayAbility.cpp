#include "SBZGameplayAbility.h"

USBZGameplayAbility::USBZGameplayAbility() {
    this->bCancelAbilitiesOnFailedActivation = false;
    this->bIsInputToggledOnActivationOnly = false;
    this->bIsCancelOnInputReleased = false;
    this->QueuePriority = 0;
    this->InputPriority = 0;
    this->Input = ESBZAbilityInput::None;
    this->TagCooldownSeconds = 0.00f;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
}


