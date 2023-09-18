#include "SBZPlaceToolAbility.h"
#include "ESBZAbilityInput.h"

USBZPlaceToolAbility::USBZPlaceToolAbility() {
    this->OwnerCharacter = NULL;
    this->GhostTool = NULL;
    this->AttachParent = NULL;
    this->Input = ESBZAbilityInput::PlaceableTool;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}


