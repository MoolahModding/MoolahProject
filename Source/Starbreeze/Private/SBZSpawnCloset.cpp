#include "SBZSpawnCloset.h"
#include "Components/SceneComponent.h"

ASBZSpawnCloset::ASBZSpawnCloset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bStayOpenDuringStealth = false;
    this->ReactionDelay = 1.00f;
    this->NumberOfBlockingActors = 0;
    this->bActorsInVolume = false;
    this->bIsStealth = false;
}

void ASBZSpawnCloset::OnRoomVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASBZSpawnCloset::OnRoomVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASBZSpawnCloset::OnHeistGoneLoud() {
}

void ASBZSpawnCloset::BindRoomVolumeOverlaps() {
}


