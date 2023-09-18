#include "SBZGateNavLinkComponent.h"
#include "ComponentInstanceDataCache.h"

USBZGateNavLinkComponent::USBZGateNavLinkComponent() {
    this->bIsBlocked = false;
    this->bIsUsing = false;
    this->AgilityComponent = NULL;
    this->AllowedBlockingCharacter = NULL;
    this->AllowedBlockingController = NULL;
    this->OriginalAreaClass = NULL;
    this->OriginalAreaClass = NULL;
    this->CreationMethod = EComponentCreationMethod::Instance;
}


