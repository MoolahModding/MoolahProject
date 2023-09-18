#include "SBZGameplayAbility_Interact.h"
#include "ESBZAbilityInput.h"

USBZGameplayAbility_Interact::USBZGameplayAbility_Interact() {
    this->Interactor = NULL;
    this->Input = ESBZAbilityInput::Interact;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}


