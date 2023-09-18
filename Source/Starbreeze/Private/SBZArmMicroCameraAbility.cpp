#include "SBZArmMicroCameraAbility.h"
#include "ESBZAbilityInput.h"

USBZArmMicroCameraAbility::USBZArmMicroCameraAbility() {
    this->OwnerCharacter = NULL;
    this->Input = ESBZAbilityInput::ToolSkill;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


