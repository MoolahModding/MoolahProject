#include "SBZPartyClient.h"
#include "Net/UnrealNetwork.h"

USBZPartyClient::USBZPartyClient() {
}

void USBZPartyClient::ServerNotifyLeftLobby_Implementation(const FUniqueNetIdRepl& ClientId) {
}
bool USBZPartyClient::ServerNotifyLeftLobby_Validate(const FUniqueNetIdRepl& ClientId) {
    return true;
}

void USBZPartyClient::ServerNotifyJoinedLobby_Implementation(const FUniqueNetIdRepl& ClientId) {
}
bool USBZPartyClient::ServerNotifyJoinedLobby_Validate(const FUniqueNetIdRepl& ClientId) {
    return true;
}

void USBZPartyClient::ServerNotifyFailedToJoinLobby_Implementation(const FUniqueNetIdRepl& ClientId) {
}
bool USBZPartyClient::ServerNotifyFailedToJoinLobby_Validate(const FUniqueNetIdRepl& ClientId) {
    return true;
}

void USBZPartyClient::ServerLogin_Implementation(const FSBZPartyMemberInfo& Client) {
}
bool USBZPartyClient::ServerLogin_Validate(const FSBZPartyMemberInfo& Client) {
    return true;
}

void USBZPartyClient::OnRep_PartyState() {
}

void USBZPartyClient::LeaveLobby_Implementation() {
}

void USBZPartyClient::ConnectToLobby_Implementation(const FString& InLobbyNetId) {
}

void USBZPartyClient::ClientLoginAck_Implementation(const FUniqueNetIdRepl& InNetId, bool bWasSuccessful) {
}

void USBZPartyClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPartyClient, PartyState);
}


