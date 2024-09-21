#include "SBZChatInGame.h"

ASBZChatInGame::ASBZChatInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void ASBZChatInGame::ServerChatMessageReceived_Implementation(int32 PlayerId, const FSBZPlayerChatEvent& PlayerChatEvent) {
}

void ASBZChatInGame::ServerCallMessageReceived_Implementation(APlayerState* PlayerState, uint8 CallIndex) {
}

void ASBZChatInGame::SendChatMessageToServer(const FSBZPlayerChatEvent& ChatEventData) {
}

void ASBZChatInGame::SendCallMessageToServer(const FSBZPlayerCallEvent& CallEventData) {
}

void ASBZChatInGame::MulticastChatMessageReceived_Implementation(int32 PlayerId, const FSBZPlayerChatEvent& PlayerChatEvent) {
}

void ASBZChatInGame::MulticastCallMessageReceived_Implementation(APlayerState* PlayerState, uint8 CallIndex) {
}

void ASBZChatInGame::ClientSubscribeToChatMessages_Implementation() {
}


