#include "SBZAimAssistComponent.h"

USBZAimAssistComponent::USBZAimAssistComponent() {
    this->PlayerCharacter = NULL;
    this->CurrentTarget = NULL;
    this->LastTarget = NULL;
    this->MaxFireTime = 0.10f;
}


