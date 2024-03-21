#include "SBZSpawnCloset.h"

void ASBZSpawnCloset::OnRoomVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASBZSpawnCloset::OnRoomVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASBZSpawnCloset::OnHeistGoneLoud() {
}

void ASBZSpawnCloset::BindRoomVolumeOverlaps() {
}

ASBZSpawnCloset::ASBZSpawnCloset() {
    this->bStayOpenDuringStealth = false;
    this->CivilianDespawnDelay = 1.00f;
    this->NumberOfBlockingActors = 0;
    this->bActorsInVolume = false;
    this->bIsStealth = false;
}

