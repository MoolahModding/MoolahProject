#include "SBZRoomActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASBZRoomActor::ASBZRoomActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomCollider"));
    this->BoxComponent->SetupAttachment(RootComponent);
}


