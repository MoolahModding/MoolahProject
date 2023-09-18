#include "SBZBeaconActionPhaseClient.h"
#include "Net/UnrealNetwork.h"

ASBZBeaconActionPhaseClient::ASBZBeaconActionPhaseClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsDsLobbyClient = false;
}

void ASBZBeaconActionPhaseClient::ServerVoteStayAsParty_Implementation() {
}

void ASBZBeaconActionPhaseClient::ServerSetSlotStatus_Implementation(const FUniqueNetIdRepl& InPlayerId, ESBZSlotStatus Status) {
}

void ASBZBeaconActionPhaseClient::ServerSetPlayerLoadout_Implementation(const FUniqueNetIdRepl& InPlayerId, const FPD3PlayerLoadout& InLoadout, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled) {
}

void ASBZBeaconActionPhaseClient::ServerSetPlayerLoadingComplete_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZBeaconActionPhaseClient::ServerSetPlayerInfo_Implementation(const FSBZLobbyCharacterInfo& PlayerInfo) {
}
bool ASBZBeaconActionPhaseClient::ServerSetPlayerInfo_Validate(const FSBZLobbyCharacterInfo& PlayerInfo) {
    return true;
}

void ASBZBeaconActionPhaseClient::ServerSetPlayerData_Implementation(const FSBZSlotData& InSlotData) {
}

void ASBZBeaconActionPhaseClient::ServerSetPlayerCharactersArray_Implementation(const FUniqueNetIdRepl& InPlayerId, const TArray<FSoftObjectPath>& InPreferredPlayerCharacters, const TArray<FSoftObjectPath>& InInventoryPlayerCharacters) {
}

void ASBZBeaconActionPhaseClient::ServerReserveSlot_Implementation(const TArray<FSBZPlayerSlotInfo>& InPlayers) {
}
bool ASBZBeaconActionPhaseClient::ServerReserveSlot_Validate(const TArray<FSBZPlayerSlotInfo>& InPlayers) {
    return true;
}

void ASBZBeaconActionPhaseClient::ServerRemovePreplanningAsset_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZBeaconActionPhaseClient::ServerPlayerToReadyReceive_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZBeaconActionPhaseClient::ServerPlayerToReadyAck_Implementation() {
}

void ASBZBeaconActionPhaseClient::ServerPlayerToReady() {
}

void ASBZBeaconActionPhaseClient::ServerNotifyStartTravel_Implementation(const FUniqueNetIdRepl& InPlayerIdStartTravel) {
}

void ASBZBeaconActionPhaseClient::ServerAddPreplanningAsset_Implementation(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku) {
}

void ASBZBeaconActionPhaseClient::SendPreplanningAssets() {
}

void ASBZBeaconActionPhaseClient::SendActiveLoadout(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZBeaconActionPhaseClient::OnRep_CharactersInfo() {
}

void ASBZBeaconActionPhaseClient::OnActiveLoadoutChanged(int32 NewActiveLoadoutIndex) {
}

void ASBZBeaconActionPhaseClient::NotifyMissionEnd_Implementation() {
}

void ASBZBeaconActionPhaseClient::ClientUpdateStayAsPartyList_Implementation(const TArray<FString>& BackendPlayerIds) {
}

void ASBZBeaconActionPhaseClient::ClientUpdateSlotsData_Implementation(const TArray<FSBZSlotData>& InSlotsData) {
}

void ASBZBeaconActionPhaseClient::ClientTravelConnectionTimeout() {
}

void ASBZBeaconActionPhaseClient::ClientStartWaitingPlayersLoadingComplete_Implementation() {
}

void ASBZBeaconActionPhaseClient::ClientStartTravelAck_Implementation(const ESBZOnlineCode& Result) {
}

void ASBZBeaconActionPhaseClient::ClientSetPlayerLoadout_Implementation(const FUniqueNetIdRepl& InPlayerId, const FPD3PlayerLoadout& InLoadout, const FSoftObjectPath InSelectedCharacter, const ESBZPlatform InPlatform, const int32 InInfamyLevel, const FString& AccelByteUserName, const FString& AccelByteDisplayName, bool bCrossPlayEnabled) {
}

void ASBZBeaconActionPhaseClient::ClientRestartPreTravelTimer_Implementation(float PreTravelTimeLimit) {
}

void ASBZBeaconActionPhaseClient::ClientRestartPreMatchTimer_Implementation(float PreMatchReadyTimeLimit) {
}

void ASBZBeaconActionPhaseClient::ClientReserveSlotAck_Implementation(bool bWasSuccessful, const FSBZMissionInfo& InMissionInfo) {
}

void ASBZBeaconActionPhaseClient::ClientPreplanningAssetRemoved_Implementation(const FUniqueNetIdRepl& InPlayerId) {
}

void ASBZBeaconActionPhaseClient::ClientPreplanningAssetRejected_Implementation() {
}

void ASBZBeaconActionPhaseClient::ClientPreplanningAssetAdded_Implementation(const FUniqueNetIdRepl& InPlayerId, const FString& AccelByteItemSku) {
}

void ASBZBeaconActionPhaseClient::ClientPreMatchLobbyStatusUpdated_Implementation(ESBZPreMatchLobbyStatus InStatus) {
}

void ASBZBeaconActionPhaseClient::ClientPlayerToReadyAck_Implementation() {
}

void ASBZBeaconActionPhaseClient::ClientJoinPartyByCode_Implementation(const FString& PartyCode) {
}

void ASBZBeaconActionPhaseClient::ClientInitializeTravel_Implementation() {
}

void ASBZBeaconActionPhaseClient::ClientForceReadyButtonByServer_Implementation() {
}

void ASBZBeaconActionPhaseClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZBeaconActionPhaseClient, PlayersInfo);
}


