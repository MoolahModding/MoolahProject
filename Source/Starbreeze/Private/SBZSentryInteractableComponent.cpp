#include "SBZSentryInteractableComponent.h"

USBZSentryInteractableComponent::USBZSentryInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverheatInteractionTime = 1.00f;
    this->RegularInteractionTime = 2.00f;
}


