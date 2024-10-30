#include "SBZConsumableInteractableComponent.h"

USBZConsumableInteractableComponent::USBZConsumableInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRequirementsCheckedEveryTick = true;
    this->ModeArray.AddDefaulted(2);
}


