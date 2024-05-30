#include "SBZGateNavLinkComponent.h"
#include "ComponentInstanceDataCache.h"

USBZGateNavLinkComponent::USBZGateNavLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CreationMethod = EComponentCreationMethod::Instance;
    this->LeftRoom = NULL;
    this->RightRoom = NULL;
    this->bIsBlocked = false;
    this->bIsUsing = false;
    this->AgilityComponent = NULL;
    this->AllowedBlockingCharacter = NULL;
    this->AllowedBlockingController = NULL;
    this->OriginalAreaClass = NULL;
}


