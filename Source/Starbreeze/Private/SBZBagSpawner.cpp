#include "SBZBagSpawner.h"

void ASBZBagSpawner::StartSpawningBags() {
}

ASBZBagSpawner::ASBZBagSpawner() {
    this->NumberOfBags = 1;
    this->DelayBetweenSpawns = 2.00f;
    this->BagTypeToSpawn = NULL;
    this->bShouldLaunchBag = false;
    this->LaunchSpeed = 500.00f;
    this->bShouldLaunchWithinCone = false;
    this->ConeAngle = 0.00f;
}

