#include "SBZSaveManager.h"

void USBZSaveManager::UpdateLoadoutInLobby() {
}

USBZProgressionSaveGame* USBZSaveManager::GetProgressionSaveGame() const {
    return NULL;
}

USBZSaveManager* USBZSaveManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

USBZSaveManager::USBZSaveManager() {
    this->ProgressionSaveGame = NULL;
    this->DefaultProgressionSaveGame = NULL;
}

