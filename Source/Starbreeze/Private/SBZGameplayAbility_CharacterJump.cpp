#include "SBZGameplayAbility_CharacterJump.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterJump::USBZGameplayAbility_CharacterJump() {
    this->Input = ESBZAbilityInput::Jump;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}


