#include "SBZSimplePhysicsCorrector.h"
#include "Net/UnrealNetwork.h"

USBZSimplePhysicsCorrector::USBZSimplePhysicsCorrector() {
    this->TeleportDistance = 200.00f;
    FProperty* p_bReplicates = GetClass()->FindPropertyByName("bReplicates");
    *p_bReplicates->ContainerPtrToValuePtr<uint8>(this) = true;
}

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


