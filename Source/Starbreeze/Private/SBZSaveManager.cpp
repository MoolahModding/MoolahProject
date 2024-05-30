#include "SBZSaveManager.h"

USBZSaveManager::USBZSaveManager() {
    this->ProgressionSaveGame = NULL;
    this->DefaultProgressionSaveGame = NULL;
    this->ProgressionSaveChallenges = NULL;
    this->DefaultProgressionSaveChallenges = NULL;
}

void USBZSaveManager::UpdateLoadoutInLobby() {
}

USBZProgressionSaveGame* USBZSaveManager::GetProgressionSaveGame() const {
    return NULL;
}

USBZProgressionSaveChallenges* USBZSaveManager::GetProgressionSaveChallenges() const {
    return NULL;
}

USBZSaveManager* USBZSaveManager::GetChecked(const UObject* WorldContextObject) {
    return NULL;
}

USBZSaveManager* USBZSaveManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


