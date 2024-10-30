#include "SBZSecurityRoom.h"

ASBZSecurityRoom::ASBZSecurityRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = true;
    this->ShadeCameraDownVO = NULL;
    this->ShadeCameraUpVO = NULL;
    this->GuardRoomSpawner = NULL;
    this->FocusActor = NULL;
}

void ASBZSecurityRoom::OnPlayableLevelInitialized(UWorld* World) {
}

void ASBZSecurityRoom::OnCameraDestroyed(AActor* DestroyedActor) {
}


