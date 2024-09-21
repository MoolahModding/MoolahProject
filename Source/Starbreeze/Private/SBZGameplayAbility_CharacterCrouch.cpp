#include "SBZGameplayAbility_CharacterCrouch.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterCrouch::USBZGameplayAbility_CharacterCrouch() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Input = ESBZAbilityInput::Crouch;
}


