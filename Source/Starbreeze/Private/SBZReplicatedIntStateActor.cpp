#include "SBZReplicatedIntStateActor.h"
#include "Net/UnrealNetwork.h"

ASBZReplicatedIntStateActor::ASBZReplicatedIntStateActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->State = 0;
    this->bClientDelayStateFromServer = false;
    this->ClientStateDelay = 0.20f;
}

void ASBZReplicatedIntStateActor::SetState(int32 NewState, bool bDoCosmetics) {
}

void ASBZReplicatedIntStateActor::SetLocalState(int32 NewState, bool bDoCosmetics) {
}


void ASBZReplicatedIntStateActor::OnRep_State(int32 OldState) {
}

void ASBZReplicatedIntStateActor::Multicast_SetState_Implementation(int32 NewState) {
}

void ASBZReplicatedIntStateActor::IncreaseState(bool bDoCosmetics) {
}

void ASBZReplicatedIntStateActor::DecreaseState(bool bDoCosmetics) {
}

void ASBZReplicatedIntStateActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZReplicatedIntStateActor, State);
}


