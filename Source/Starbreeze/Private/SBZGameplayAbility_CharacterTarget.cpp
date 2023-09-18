#include "SBZGameplayAbility_CharacterTarget.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterTarget::USBZGameplayAbility_CharacterTarget() {
    this->bIsCancelOnInputReleased = true;
    this->Input = ESBZAbilityInput::Targeting;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}


