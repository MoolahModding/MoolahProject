#include "SBZMainMenuCameraManager.h"

ASBZMainMenuCameraManager::ASBZMainMenuCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyCameraName = TEXT("Lobby");
}

void ASBZMainMenuCameraManager::SwitchToDefaultCamera() {
}

void ASBZMainMenuCameraManager::SwitchToCamera(const FName& CameraName) {
}

ASBZMainMenuCameraManager* ASBZMainMenuCameraManager::GetMainMenuCameraManager(const UObject* WorldContextObject) {
    return NULL;
}


