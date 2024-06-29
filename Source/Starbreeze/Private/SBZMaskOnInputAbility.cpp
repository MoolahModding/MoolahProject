#include "SBZMaskOnInputAbility.h"
#include "ESBZAbilityInput.h"

USBZMaskOnInputAbility::USBZMaskOnInputAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Input = ESBZAbilityInput::MaskOn;
    this->MaskOnDuration = 1.00f;
}


