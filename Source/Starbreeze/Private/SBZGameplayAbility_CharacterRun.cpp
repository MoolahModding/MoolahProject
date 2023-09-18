#include "SBZGameplayAbility_CharacterRun.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_CharacterRun::USBZGameplayAbility_CharacterRun() {
    this->bIsCancelOnInputReleased = true;
    this->Input = ESBZAbilityInput::Run;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(2);
}


