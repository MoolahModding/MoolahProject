#include "SBZDespawnVolume.h"

ASBZDespawnVolume::ASBZDespawnVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->Room = NULL;
}


