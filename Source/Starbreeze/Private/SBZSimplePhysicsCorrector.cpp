#include "SBZSimplePhysicsCorrector.h"
#include "Net/UnrealNetwork.h"

void USBZSimplePhysicsCorrector::SetVelocity(FVector Vel) {
}

void USBZSimplePhysicsCorrector::MulticastSyncState_Implementation(FSBZSimplePhysicsState State) {
}

void USBZSimplePhysicsCorrector::MulticastInvalidateState_Implementation() {
}

void USBZSimplePhysicsCorrector::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZSimplePhysicsCorrector, Velocity);
    DOREPLIFETIME(USBZSimplePhysicsCorrector, AngularVel);
    DOREPLIFETIME(USBZSimplePhysicsCorrector, LastState);
}

USBZSimplePhysicsCorrector::USBZSimplePhysicsCorrector() {
    this->TeleportDistance = 200.00f;
}

