#include "SBZGameplayAbility_Interact.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_Interact::USBZGameplayAbility_Interact() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Input = ESBZAbilityInput::Interact;
    this->Interactor = NULL;
}


