#include "SBZHackableInteractableComponent.h"

USBZHackableInteractableComponent::USBZHackableInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsScramblerAffected = true;
    this->bPredictLocalEnd = true;
    this->bSyncInteracting = false;
    this->bRepeatable = true;
    this->bIsAllowedInCasing = true;
    this->bIsIllegal = false;
}


