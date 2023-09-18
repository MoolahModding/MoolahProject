#include "SBZNavLinkAgilityComponent.h"

USBZNavLinkAgilityComponent::USBZNavLinkAgilityComponent() {
    this->QueryParams = NULL;
    this->LeftToRightType = ESBZAgilityType::Invalid;
    this->RightToLeftType = ESBZAgilityType::Invalid;
    this->bUseNavMesh = true;
    this->ForcedLeftTrajectoryMontage = NULL;
    this->bLeftUseAnimationToComputeEnd = false;
    this->ForcedRightTrajectoryMontage = NULL;
    this->bRightUseAnimationToComputeEnd = false;
    this->bComputeOnBeginPlay = true;
    this->InterfaceObject = NULL;
}

void USBZNavLinkAgilityComponent::ComputeTrajectories() {
}


