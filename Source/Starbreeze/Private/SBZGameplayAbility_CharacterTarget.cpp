#include "SBZGameplayAbility_CharacterTarget.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterTarget::USBZGameplayAbility_CharacterTarget() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bIsCancelToggleOnInputPressed = true;
    this->bIsCancelOnInputReleased = true;
    this->Input = ESBZAbilityInput::Targeting;
}


