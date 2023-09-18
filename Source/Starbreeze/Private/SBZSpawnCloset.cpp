#include "SBZSpawnCloset.h"
#include "Components/SceneComponent.h"

ASBZSpawnCloset::ASBZSpawnCloset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStayOpenDuringStealth = false;
    this->NumberOfBlockingActors = 0;
    this->bActorsInVolume = false;
    this->bIsStealth = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZSpawnCloset::OnRoomVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASBZSpawnCloset::OnRoomVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASBZSpawnCloset::OnHeistGoneLoud() {
}

void ASBZSpawnCloset::BindRoomVolumeOverlaps() {
}


