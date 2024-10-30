#include "SBZAcousticPortalConnectorComponent.h"

USBZAcousticPortalConnectorComponent::USBZAcousticPortalConnectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConnectedPortal = NULL;
    this->bIsOpenState = false;
}

void USBZAcousticPortalConnectorComponent::SetPortalOpenState(bool bIsOpen, bool bIsInstant) {
}

void USBZAcousticPortalConnectorComponent::SetAllowPortalStateChange(bool bIsAllowed) {
}

bool USBZAcousticPortalConnectorComponent::IsPortalStateChangeAllowed() const {
    return false;
}


