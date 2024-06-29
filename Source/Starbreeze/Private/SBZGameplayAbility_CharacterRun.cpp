#include "SBZGameplayAbility_CharacterRun.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterRun::USBZGameplayAbility_CharacterRun() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(2);
    this->bIsCancelToggleOnInputPressed = true;
    this->bIsCancelOnInputReleased = true;
    this->Input = ESBZAbilityInput::Run;
}


