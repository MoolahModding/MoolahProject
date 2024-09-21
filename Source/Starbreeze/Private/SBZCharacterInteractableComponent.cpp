#include "SBZCharacterInteractableComponent.h"

USBZCharacterInteractableComponent::USBZCharacterInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInteractionEnabled = false;
    this->bRepeatable = true;
}


