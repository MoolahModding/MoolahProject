#include "SBZPlaceToolAbility.h"
#include "ESBZAbilityInput.h"

USBZPlaceToolAbility::USBZPlaceToolAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->Input = ESBZAbilityInput::PlaceableTool;
    this->OwnerCharacter = NULL;
    this->GhostTool = NULL;
    this->AttachParent = NULL;
}


