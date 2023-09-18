#include "SBZAnimMode_LipSync.h"

FSBZAnimMode_LipSync::FSBZAnimMode_LipSync() {
    this->PhonemeBlendInType = EAlphaBlendOption::Linear;
    this->PhonemeBlendOutType = EAlphaBlendOption::Linear;
    this->PhonemeStrength = 0.00f;
    this->DialogStartTime = 0.00f;
    this->Alpha = 0.00f;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->LODThreshold = 0;
    this->LODInterpolateTime = 0.00f;
    this->LODInterpolateTimer = 0.00f;
}

