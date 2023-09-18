#include "SBZActorSpawnRegionBase.h"

ASBZActorSpawnRegionBase::ASBZActorSpawnRegionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionCapsuleRadius = 34.00f;
    this->CollisionCapsuleHalfHeight = 88.00f;
    this->SpawnLocationBreadth = 10.00f;
    this->SpawnLocationClearance = 5.00f;
    this->bShouldIgnoreActorScale = true;
    this->SpawnLocationOffset = 0.00f;
    this->bSurfaceNormalAligned = true;
    this->bDrawSpawnLocationGenerationDebugShapes = false;
}


