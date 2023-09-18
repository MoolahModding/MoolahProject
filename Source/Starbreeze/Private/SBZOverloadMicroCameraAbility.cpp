#include "SBZOverloadMicroCameraAbility.h"
#include "ESBZAbilityInput.h"

USBZOverloadMicroCameraAbility::USBZOverloadMicroCameraAbility() {
    this->OwnerCharacter = NULL;
    this->Input = ESBZAbilityInput::ToolSkill;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


