#include "SBZGateNavLinkAgilityComponent.h"
#include "ComponentInstanceDataCache.h"
#include "ESBZAgilityType.h"

USBZGateNavLinkAgilityComponent::USBZGateNavLinkAgilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CreationMethod = EComponentCreationMethod::Instance;
    this->LeftToRightType = ESBZAgilityType::ClimbOver;
    this->RightToLeftType = ESBZAgilityType::ClimbOver;
}


