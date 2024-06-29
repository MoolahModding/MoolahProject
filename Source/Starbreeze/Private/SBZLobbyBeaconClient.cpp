#include "SBZLobbyBeaconClient.h"
#include "Net/UnrealNetwork.h"

ASBZLobbyBeaconClient::ASBZLobbyBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyState = NULL;
}

void ASBZLobbyBeaconClient::ServerUpdateSlot_Implementation(const FUniqueNetIdRepl& InPlayerId, FSBZSlotData InSlotData) {
}

void ASBZLobbyBeaconClient::ServerUpdatePlayerInfo_Implementation(const FSBZLobbyCharacterInfo& PlayerInfo) {
}
bool ASBZLobbyBeaconClient::ServerUpdatePlayerInfo_Validate(const FSBZLobbyCharacterInfo& PlayerInfo) {
    return true;
}

void ASBZLobbyBeaconClient::ServerSetPlayerReady_Implementation(const FUniqueNetIdRepl& InPlayerId, bool bIsReady) {
}
bool ASBZLobbyBeaconClient::ServerSetPlayerReady_Validate(const FUniqueNetIdRepl& InPlayerId, bool bIsReady) {
    return true;
}

void ASBZLobbyBeaconClient::ServerSetPlayerAcceptedMatch_Implementation(const FUniqueNetIdRepl& InPlayerId, bool bIsConfirmed) {
}
bool ASBZLobbyBeaconClient::ServerSetPlayerAcceptedMatch_Validate(const FUniqueNetIdRepl& InPlayerId, bool bIsConfirmed) {
    return true;
}

void ASBZLobbyBeaconClient::ServerReserveSlot_Implementation(const TArray<FUniqueNetIdRepl>& InPlayerIds) {
}
bool ASBZLobbyBeaconClient::ServerReserveSlot_Validate(const TArray<FUniqueNetIdRepl>& InPlayerIds) {
    return true;
}

void ASBZLobbyBeaconClient::ServerRemovePreplanningAsset_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZLobbyBeaconClient::ServerPlayerToReadyReceive_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}
bool ASBZLobbyBeaconClient::ServerPlayerToReadyReceive_Validate(const FUniqueNetIdRepl& InPlayerId) {
    return true;
}

void ASBZLobbyBeaconClient::ServerPlayerToReady() {
}

void ASBZLobbyBeaconClient::ServerMoveToServerAck_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}
bool ASBZLobbyBeaconClient::ServerMoveToServerAck_Validate(const FUniqueNetIdRepl& InPlayerId) {
    return true;
}

void ASBZLobbyBeaconClient::ServerAddPreplanningAsset_Implementation(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku) {
}

void ASBZLobbyBeaconClient::OnRep_LobbyState() {
}

void ASBZLobbyBeaconClient::MulticastSlotUpdated_Implementation(FSBZSlotData InSlotData) {
}

void ASBZLobbyBeaconClient::ClientStopWaitingOtherPlayers_Implementation() {
}

void ASBZLobbyBeaconClient::ClientReserveSlotAck_Implementation(bool bWasSuccessful) {
}

void ASBZLobbyBeaconClient::ClientPreplanningAssetRemoved_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZLobbyBeaconClient::ClientPreplanningAssetRejected_Implementation() {
}

void ASBZLobbyBeaconClient::ClientPreplanningAssetAdded_Implementation(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku) {
}

void ASBZLobbyBeaconClient::ClientInitiateWaitActionPhase_Implementation() {
}

void ASBZLobbyBeaconClient::ClientFreeSlot_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZLobbyBeaconClient::ClientAddSlot_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZLobbyBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLobbyBeaconClient, LobbyState);
}


