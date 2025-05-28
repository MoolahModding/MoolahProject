#include "SBZAirPathTestActor.h"

ASBZAirPathTestActor::ASBZAirPathTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->bIsPartialPathAllowed = false;
    this->NumPaths = 100;
    this->FuzzingSeed = 1337;
}


