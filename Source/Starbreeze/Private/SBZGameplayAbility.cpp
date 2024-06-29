#include "SBZGameplayAbility.h"

USBZGameplayAbility::USBZGameplayAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->bCancelAbilitiesOnFailedActivation = false;
    this->bIsCancelToggleOnInputPressed = false;
    this->bIsCancelOnInputReleased = false;
    this->QueuePriority = 0;
    this->InputPriority = 0;
    this->Input = ESBZAbilityInput::None;
    this->TagCooldownSeconds = 0.00f;
}


