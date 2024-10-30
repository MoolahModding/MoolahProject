#include "SBZBlockedPlayerManager.h"

USBZBlockedPlayerManager::USBZBlockedPlayerManager() {
}

void USBZBlockedPlayerManager::OnPlatformUserInitialized() {
}

void USBZBlockedPlayerManager::OnMatchInfoUpdated() {
}

void USBZBlockedPlayerManager::OnBlockedPlayersUpdated() {
}

bool USBZBlockedPlayerManager::IsPlayerBlocked(const FString& PlayerId) const {
    return false;
}

USBZBlockedPlayerManager* USBZBlockedPlayerManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


