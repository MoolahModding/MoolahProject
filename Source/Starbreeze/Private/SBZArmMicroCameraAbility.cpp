#include "SBZArmMicroCameraAbility.h"
#include "ESBZAbilityInput.h"

USBZArmMicroCameraAbility::USBZArmMicroCameraAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::ToolSkill;
    this->OwnerCharacter = NULL;
}


