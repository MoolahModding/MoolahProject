#include "SBZFlooredIntervalDetectionSettings.h"

FSBZFlooredIntervalDetectionSettings::FSBZFlooredIntervalDetectionSettings() {
    this->bUseDisablingCurve = false;
    this->bUseDisablingFrameInterval = false;
    this->MinFrame = 0;
    this->MaxFrame = 0;
    this->ToeBaseHeightThreshold = 0.00f;
    this->ToeBasePitchThreshold = 0.00f;
    this->FloorBoneHeightThreshold = 0.00f;
    this->FloorBonePitchThreshold = 0.00f;
    this->bAutoComputeLooping = false;
    this->bIsLooping = false;
    this->bIsDoingToeToTip = false;
    this->bDebug = false;
    this->MinIntervalFrameCount = 0;
    this->bCreateContactCurves = false;
    this->bCreateContactNotifies = false;
}

