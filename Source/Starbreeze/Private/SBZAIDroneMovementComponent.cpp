#include "SBZAIDroneMovementComponent.h"
#include "Net/UnrealNetwork.h"

USBZAIDroneMovementComponent::USBZAIDroneMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxFlyDownSpeed = 200.00f;
    this->DroneAvoidanceConsiderationRadius = 150.00f;
    this->DroneAvoidanceCollisionRadius = 100.00f;
}

void USBZAIDroneMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAIDroneMovementComponent, MoveUpVector);
}


