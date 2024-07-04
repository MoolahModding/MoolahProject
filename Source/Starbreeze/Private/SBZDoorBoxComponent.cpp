#include "SBZDoorBoxComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

USBZDoorBoxComponent::USBZDoorBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->OpenDirection = ESBZGateState::OpenForward;
}


