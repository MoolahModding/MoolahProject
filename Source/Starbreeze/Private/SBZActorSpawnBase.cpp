#include "SBZActorSpawnBase.h"

ASBZActorSpawnBase::ASBZActorSpawnBase() {
    this->Seed = -1;
    this->bRandomizeSpawnTransformStartingIndex = true;
    this->NextSpawnTransformIndex = 0;
}

