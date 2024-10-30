#include "SBZPartyManager.h"

USBZPartyManager::USBZPartyManager() {
}

void USBZPartyManager::SetLobbyType(ESBZOnlineJoinType InLobbyType, bool bIsSaved) {
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

bool USBZPartyManager::GetPartyMember(const FString& UserId, FSBZUser& OutPartyMemberUser) const {
    return false;
}

USBZPartyManager* USBZPartyManager::GetPartyManager(const UObject* WorldContextObject) {
    return NULL;
}

ESBZOnlineJoinType USBZPartyManager::GetLobbyType() const {
    return ESBZOnlineJoinType::Debug_DEPRECATED;
}


