#include "SBZBreakableMachineInteractableComponent.h"

USBZBreakableMachineInteractableComponent::USBZBreakableMachineInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRepeatable = true;
    this->CurrentMode = ESBZBreakableMachineInteractionMode::ForceOpen;
}


