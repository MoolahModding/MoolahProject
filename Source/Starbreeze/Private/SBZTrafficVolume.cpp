#include "SBZTrafficVolume.h"

ASBZTrafficVolume::ASBZTrafficVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrafficLightActor = NULL;
    this->TrafficLightIndex = -1;
    this->bNetLoadOnClient = false;
}


