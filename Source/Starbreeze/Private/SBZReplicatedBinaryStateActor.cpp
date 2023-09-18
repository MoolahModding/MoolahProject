#include "SBZReplicatedBinaryStateActor.h"
#include "Net/UnrealNetwork.h"

ASBZReplicatedBinaryStateActor::ASBZReplicatedBinaryStateActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bState = false;
    this->bClientDelayStateFromServer = false;
    this->ClientStateDelay = 0.20f;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
}

void ASBZReplicatedBinaryStateActor::SetState(bool bNewState, bool bDoCosmetics) {
}

void ASBZReplicatedBinaryStateActor::SetLocalState(bool bNewState, bool bDoCosmetics) {
}


void ASBZReplicatedBinaryStateActor::OnRep_State(bool bOldState) {
}

void ASBZReplicatedBinaryStateActor::Multicast_SetState_Implementation(bool bNewState) {
}

void ASBZReplicatedBinaryStateActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZReplicatedBinaryStateActor, bState);
}


