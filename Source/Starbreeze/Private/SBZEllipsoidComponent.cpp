#include "SBZEllipsoidComponent.h"

USBZEllipsoidComponent::USBZEllipsoidComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->Mobility = EComponentMobility::Static;
}


