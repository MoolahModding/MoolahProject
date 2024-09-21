#include "SBZAirNavigationBoundsVolume.h"

ASBZAirNavigationBoundsVolume::ASBZAirNavigationBoundsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->bNotForClientOrServer = true;
}


