#include "SBZLookFocusParameters.h"

FSBZLookFocusParameters::FSBZLookFocusParameters() {
    this->MinBlendInTime = 0.00f;
    this->BlendInEaseExp = 0.00f;
    this->MinBlendOutTime = 0.00f;
    this->BlendOutEaseExp = 0.00f;
    this->DistanceForMaxSignificance = 0.00f;
    this->Speed = 0.00f;
    this->MaxDistFromGoal = 0.00f;
    this->RotationInterpSpeed = 0.00f;
    this->NotifyFilterType = ENotifyFilterType::NoFiltering;
    this->NotifyFilterLOD = 0;
}

