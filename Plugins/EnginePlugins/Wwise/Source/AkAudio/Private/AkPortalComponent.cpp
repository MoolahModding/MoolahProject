#include "AkPortalComponent.h"

UAkPortalComponent::UAkPortalComponent() {
    this->bDynamic = false;
    this->InitialState = AkAcousticPortalState::Open;
    this->ObstructionRefreshInterval = 0.00f;
    this->ObstructionCollisionChannel = ECC_Visibility;
    this->bUseAttachParentBound = true;
}

bool UAkPortalComponent::PortalPlacementValid() const {
    return false;
}

void UAkPortalComponent::OpenPortal() {
}

UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent() const {
    return NULL;
}

AkAcousticPortalState UAkPortalComponent::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void UAkPortalComponent::ClosePortal() {
}


