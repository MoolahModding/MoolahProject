#include "SBZChatInGame.h"

ASBZChatInGame::ASBZChatInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    //this->bEnableNetReadyEvent = true;
}

void ASBZChatInGame::ServerCallMessageReceived_Implementation(APlayerState* PlayerState, uint8 CallIndex) {
}

void ASBZChatInGame::SendCallMessageToServer(const FSBZPlayerCallEvent& CallEventData) {
}

void ASBZChatInGame::MulticastCallMessageReceived_Implementation(APlayerState* PlayerState, uint8 CallIndex) {
}

void ASBZChatInGame::ClientSubscribeToChatMessages_Implementation() {
}


