#include "SBZMaskOnInputAbility.h"
#include "ESBZAbilityInput.h"

USBZMaskOnInputAbility::USBZMaskOnInputAbility() {
    this->MaskOnDuration = 1.00f;
    this->Input = ESBZAbilityInput::MaskOn;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}


