#include "SBZCutProgressData.h"

FSBZCutProgressData::FSBZCutProgressData() {
    this->AccumulatedDeltaTime = 0.00f;
    this->LineCutLength = 0.00f;
    this->bHasInitialCut = false;
    this->StartCutTimeSeconds = 0.00f;
    this->LastUsedSkillSpeedModifier = 0.00f;
    this->CurrentSplineTime = 0.00f;
}

