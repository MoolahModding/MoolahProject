#include "SBZBlockedPlayerManager.h"

void USBZBlockedPlayerManager::XsxBlockListChangeTimer() {
}

void USBZBlockedPlayerManager::OnPlatformUserInitialized() {
}

void USBZBlockedPlayerManager::OnBlockedPlayersUpdated() {
}

bool USBZBlockedPlayerManager::IsPlayerBlocked(const FString& PlayerId) const {
    return false;
}

TMap<FString, FSBZFriendListEntry> USBZBlockedPlayerManager::GetBlockedPlayers() const {
    return TMap<FString, FSBZFriendListEntry>();
}

USBZBlockedPlayerManager* USBZBlockedPlayerManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

USBZBlockedPlayerManager::USBZBlockedPlayerManager() {
}

