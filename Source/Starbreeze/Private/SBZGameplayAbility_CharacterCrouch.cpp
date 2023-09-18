#include "SBZGameplayAbility_CharacterCrouch.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterCrouch::USBZGameplayAbility_CharacterCrouch() {
    this->Input = ESBZAbilityInput::Crouch;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bRetriggerInstancedAbility = true;
}


