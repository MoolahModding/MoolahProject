#include "SBZPhoneToolAbility.h"
#include "ESBZAbilityInput.h"

USBZPhoneToolAbility::USBZPhoneToolAbility() {
    this->OwnerCharacter = NULL;
    this->Input = ESBZAbilityInput::ToolEquip;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


