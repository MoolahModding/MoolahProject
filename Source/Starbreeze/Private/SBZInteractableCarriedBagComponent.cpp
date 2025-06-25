#include "SBZInteractableCarriedBagComponent.h"

USBZInteractableCarriedBagComponent::USBZInteractableCarriedBagComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRequirementsCheckedEveryTick = true;
    this->bLocalEnabled = false;
    this->bPredictLocalEnd = true;
    this->bSyncInteracting = false;
    this->bRepeatable = true;
    this->bIsAllowedInCasing = true;
    this->bIsIllegal = false;
}


