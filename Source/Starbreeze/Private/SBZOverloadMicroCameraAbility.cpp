#include "SBZOverloadMicroCameraAbility.h"
#include "ESBZAbilityInput.h"

USBZOverloadMicroCameraAbility::USBZOverloadMicroCameraAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ToolSkill;
    this->OwnerCharacter = NULL;
}


