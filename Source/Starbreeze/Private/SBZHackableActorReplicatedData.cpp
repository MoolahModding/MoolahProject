#include "SBZHackableActorReplicatedData.h"

FSBZHackableActorReplicatedData::FSBZHackableActorReplicatedData() {
    this->CurrentState = ESBZHackableActorState::Inactive;
    this->CurrentProgress = 0;
    this->CurrentDisplayTextIndex = 0;
    this->bIsDisplayTextAdded = false;
    this->bIsStartedInStealth = false;
    this->bIsResetToGenericScreen = false;
    this->UpdateFrequency = 0.00f;
}

