#include "SBZPlayerLookAtTrigger.h"

ASBZPlayerLookAtTrigger::ASBZPlayerLookAtTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableWhenPlayerBeginsOverlapping = false;
    this->bIsDisabledWhenPlayerLookAt = true;
    this->bIsDisabledWhenAllPlayersLookAt = false;
    this->DotAngle = 0.95f;
    this->LookAtTime = 1.00f;
    this->bIsLineOfSightRequired = false;
}


