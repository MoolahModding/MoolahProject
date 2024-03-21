#include "SBZPartyManager.h"

void USBZPartyManager::SetLobbyType(ESBZOnlineJoinType InLobbyType) {
}

FString USBZPartyManager::SendPublicMessage(const FString& Message) {
    return TEXT("");
}

bool USBZPartyManager::SendPrivateMessage(const FString& PlayerId, const FString& Message) {
    return false;
}

bool USBZPartyManager::SendPartyMessage(const FString& Message) {
    return false;
}

FString USBZPartyManager::SendJoinPublicChatChannel() {
    return TEXT("");
}

bool USBZPartyManager::IsMatchmakingRequestedByPartyLeader() const {
    return false;
}

int32 USBZPartyManager::GetPartyPlayersNumber() const {
    return 0;
}

USBZPartyManager* USBZPartyManager::GetPartyManager(UObject* WorldContextObject) {
    return NULL;
}

FSBZPartyMember USBZPartyManager::GetPartyLeader() const {
    return FSBZPartyMember{};
}

ESBZOnlineJoinType USBZPartyManager::GetLobbyType() const {
    return ESBZOnlineJoinType::Debug;
}

USBZPartyManager::USBZPartyManager() {
}

