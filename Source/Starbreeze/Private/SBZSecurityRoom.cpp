#include "SBZSecurityRoom.h"

void ASBZSecurityRoom::OnPlayableLevelInitialized(UWorld* World) {
}

void ASBZSecurityRoom::OnCameraDestroyed(AActor* DestroyedActor) {
}

ASBZSecurityRoom::ASBZSecurityRoom() {
    this->ShadeCameraDownVO = NULL;
    this->ShadeCameraUpVO = NULL;
    this->GuardRoomSpawner = NULL;
}

