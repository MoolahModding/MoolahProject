#include "SBZRoomConnectorVolume.h"

ASBZRoomConnectorVolume::ASBZRoomConnectorVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWantsAIBreach = false;
    this->RoomA = NULL;
    this->RoomB = NULL;
    this->Gate = NULL;
    this->bNetLoadOnClient = false;
}


