#include "SBZAimAssistComponent.h"

USBZAimAssistComponent::USBZAimAssistComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCharacter = NULL;
    this->CurrentTarget = NULL;
    this->LastTarget = NULL;
    this->MaxFireTime = 0.10f;
}


