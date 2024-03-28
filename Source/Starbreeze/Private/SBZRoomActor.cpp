#include "SBZRoomActor.h"
#include "Components/BoxComponent.h"

ASBZRoomActor::ASBZRoomActor() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomCollider"));
}

