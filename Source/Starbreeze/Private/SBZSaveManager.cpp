#include "SBZSaveManager.h"

USBZSaveManager::USBZSaveManager() {
    this->ProgressionSaveGame = NULL;
    this->DefaultProgressionSaveGame = NULL;
}

void USBZSaveManager::UpdateLoadoutInLobby() {
}

USBZProgressionSaveGame* USBZSaveManager::GetProgressionSaveGame() const {
    return NULL;
}

USBZSaveManager* USBZSaveManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


