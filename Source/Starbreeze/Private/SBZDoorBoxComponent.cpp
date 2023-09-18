#include "SBZDoorBoxComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

USBZDoorBoxComponent::USBZDoorBoxComponent() {
    this->OpenDirection = ESBZGateState::OpenForward;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    FProperty* p_bGenerateOverlapEvents = GetClass()->FindPropertyByName("bGenerateOverlapEvents");
    *p_bGenerateOverlapEvents->ContainerPtrToValuePtr<uint8>(this) = true;
}


