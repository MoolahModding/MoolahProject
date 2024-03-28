#include "SBZSimplePhysicsCorrector.h"
#include "Net/UnrealNetwork.h"

void USBZSimplePhysicsCorrector::SetVelocity(FVector Vel) {
}

void USBZSimplePhysicsCorrector::Multicast_SyncState_Implementation(const FSBZSimplePhysicsState& State) {
}

void USBZSimplePhysicsCorrector::Multicast_InvalidateState_Implementation() {
}

void USBZSimplePhysicsCorrector::Multicast_ForceTeleport_Implementation(const FSBZSimplePhysicsState& State) {
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

