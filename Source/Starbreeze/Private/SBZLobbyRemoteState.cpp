#include "SBZLobbyRemoteState.h"
#include "Net/UnrealNetwork.h"

ASBZLobbyRemoteState::ASBZLobbyRemoteState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlotReservationTimeout = 20.00f;
    this->LobbyTravelTimeoutTime = 20.00f;
    this->LobbyTimeout = 0;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
}

void ASBZLobbyRemoteState::OnRep_LobbyTimeout() {
}

void ASBZLobbyRemoteState::OnRep_LobbyInfo() {
}

void ASBZLobbyRemoteState::HandleGameStateChanged(FName NewState) {
}

void ASBZLobbyRemoteState::BroadcastWaitGameTimerStarted_Implementation() {
}

void ASBZLobbyRemoteState::BroadcastRemotePlayerAcceptedMatch_Implementation() {
}

void ASBZLobbyRemoteState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLobbyRemoteState, PlayersJoinInfo);
    DOREPLIFETIME(ASBZLobbyRemoteState, PlayersInfo);
    DOREPLIFETIME(ASBZLobbyRemoteState, LobbyTimeout);
}


