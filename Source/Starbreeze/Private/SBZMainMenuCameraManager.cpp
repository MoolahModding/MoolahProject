#include "SBZMainMenuCameraManager.h"

void ASBZMainMenuCameraManager::SwitchToDefaultCamera() {
}

void ASBZMainMenuCameraManager::SwitchToCamera(const FName& CameraName) {
}

ASBZMainMenuCameraManager* ASBZMainMenuCameraManager::GetMainMenuCameraManager(const UObject* WorldContextObject) {
    return NULL;
}

ASBZMainMenuCameraManager::ASBZMainMenuCameraManager() {
    this->LobbyCameraName = TEXT("Lobby");
}

