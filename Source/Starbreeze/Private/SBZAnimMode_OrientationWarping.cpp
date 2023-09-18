#include "SBZAnimMode_OrientationWarping.h"

FSBZAnimMode_OrientationWarping::FSBZAnimMode_OrientationWarping() {
    this->LocomotionAngle = 0.00f;
    this->Alpha = 0.00f;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->LODThreshold = 0;
    this->LODInterpolateTime = 0.00f;
    this->LODInterpolateTimer = 0.00f;
}

