#include "SBZGameplayAbility_CharacterSlide.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterSlide::USBZGameplayAbility_CharacterSlide() {
    this->MovementComponent = NULL;
    this->Input = ESBZAbilityInput::Slide;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}


