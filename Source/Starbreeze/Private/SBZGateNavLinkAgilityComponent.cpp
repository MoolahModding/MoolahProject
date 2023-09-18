#include "SBZGateNavLinkAgilityComponent.h"
#include "ComponentInstanceDataCache.h"
#include "ESBZAgilityType.h"

USBZGateNavLinkAgilityComponent::USBZGateNavLinkAgilityComponent() {
    this->LeftToRightType = ESBZAgilityType::ClimbOver;
    this->RightToLeftType = ESBZAgilityType::ClimbOver;
    this->CreationMethod = EComponentCreationMethod::Instance;
}


