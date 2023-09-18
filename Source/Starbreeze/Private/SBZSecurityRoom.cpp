#include "SBZSecurityRoom.h"

ASBZSecurityRoom::ASBZSecurityRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuardRoomSpawner = NULL;
    this->bNetLoadOnClient = true;
}

void ASBZSecurityRoom::OnPlayableLevelInitialized(UWorld* World) {
}

void ASBZSecurityRoom::OnCameraDestroyed(AActor* DestroyedActor) {
}

void ASBZSecurityRoom::EnableSecurityRoom() {
}

void ASBZSecurityRoom::DisableSecurityRoom() {
}


