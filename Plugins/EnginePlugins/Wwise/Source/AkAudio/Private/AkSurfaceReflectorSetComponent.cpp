#include "AkSurfaceReflectorSetComponent.h"

UAkSurfaceReflectorSetComponent::UAkSurfaceReflectorSetComponent() {
    this->bEnableSurfaceReflectors = true;
    this->bEnableDiffraction = true;
    this->bEnableDiffractionOnBoundaryEdges = false;
    this->AssociatedRoom = NULL;
}

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet() {
}


