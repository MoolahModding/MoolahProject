#include "SBZGameplayAbility_CharacterSlide.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterSlide::USBZGameplayAbility_CharacterSlide() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Input = ESBZAbilityInput::Slide;
    this->MovementComponent = NULL;
}


