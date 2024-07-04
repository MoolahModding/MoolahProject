#include "SBZGameplayAbility_CharacterJump.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterJump::USBZGameplayAbility_CharacterJump() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bCancelAbilitiesOnFailedActivation = true;
    this->Input = ESBZAbilityInput::Jump;
}


