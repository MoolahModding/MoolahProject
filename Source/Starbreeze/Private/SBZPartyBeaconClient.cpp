#include "SBZPartyBeaconClient.h"
#include "Net/UnrealNetwork.h"

ASBZPartyBeaconClient::ASBZPartyBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASBZPartyBeaconClient::ServerNotifyLeftLobby_Implementation(const FUniqueNetIdRepl& ClientId) {
}
bool ASBZPartyBeaconClient::ServerNotifyLeftLobby_Validate(const FUniqueNetIdRepl& ClientId) {
    return true;
}

void ASBZPartyBeaconClient::ServerNotifyJoinedLobby_Implementation(const FUniqueNetIdRepl& ClientId) {
}
bool ASBZPartyBeaconClient::ServerNotifyJoinedLobby_Validate(const FUniqueNetIdRepl& ClientId) {
    return true;
}

void ASBZPartyBeaconClient::ServerNotifyFailedToJoinLobby_Implementation(const FUniqueNetIdRepl& ClientId) {
}
bool ASBZPartyBeaconClient::ServerNotifyFailedToJoinLobby_Validate(const FUniqueNetIdRepl& ClientId) {
    return true;
}

void ASBZPartyBeaconClient::ServerLogin_Implementation(const FSBZPartyMemberInfo& Client) {
}
bool ASBZPartyBeaconClient::ServerLogin_Validate(const FSBZPartyMemberInfo& Client) {
    return true;
}

void ASBZPartyBeaconClient::OnRep_PartyState() {
}

void ASBZPartyBeaconClient::LeaveLobby_Implementation() {
}

void ASBZPartyBeaconClient::ConnectToLobby_Implementation(const FString& InLobbyNetId) {
}

void ASBZPartyBeaconClient::ClientLoginAck_Implementation(const FUniqueNetIdRepl& InNetId, bool bWasSuccessful) {
}

void ASBZPartyBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPartyBeaconClient, PartyState);
}


