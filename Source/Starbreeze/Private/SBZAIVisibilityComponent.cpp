#include "SBZAIVisibilityComponent.h"

USBZAIVisibilityComponent::USBZAIVisibilityComponent() {
    this->bReadyForUse = true;
    this->bIsInRandomSublevel = false;
    this->CollisionChannel = ECC_GameTraceChannel1;
    this->CharacterStandHeight = 165.00f;
    this->CharacterCrouchHeight = 79.00f;
    this->NbSubRaycastPerPolarCoord = 5;
    this->MaxSubRaycastSideDistFromCenter = 35.00f;
    this->NbSubRaycastPerPolarCoordCoverPoint = 3;
    this->MaxSubRaycastSideDistFromCenterCoverPoint = 5.00f;
    this->bHasFinishedBuilding = false;
    this->bIsParsingDynNode = false;
    this->bDynVerticesHavedBeenTransformed = false;
}

