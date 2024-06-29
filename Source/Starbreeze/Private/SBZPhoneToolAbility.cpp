#include "SBZPhoneToolAbility.h"
#include "ESBZAbilityInput.h"

USBZPhoneToolAbility::USBZPhoneToolAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ToolEquip;
    this->OwnerCharacter = NULL;
}


