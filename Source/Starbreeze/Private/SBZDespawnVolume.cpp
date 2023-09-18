#include "SBZDespawnVolume.h"

ASBZDespawnVolume::ASBZDespawnVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Room = NULL;
    this->bNetLoadOnClient = false;
}


