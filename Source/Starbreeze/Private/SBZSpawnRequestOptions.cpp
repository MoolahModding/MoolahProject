#include "SBZSpawnRequestOptions.h"

FSBZSpawnRequestOptions::FSBZSpawnRequestOptions() {
    this->Priority = 0;
    this->Delay = 0.00f;
    this->Spacing = 0.00f;
    this->Timeout = 0.00f;
    this->CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::Undefined;
}

