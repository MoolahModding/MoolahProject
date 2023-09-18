#include "HoudiniParameterRampFloatPoint.h"

UHoudiniParameterRampFloatPoint::UHoudiniParameterRampFloatPoint() {
    this->Position = 0.00f;
    this->Value = 0.00f;
    this->Interpolation = EHoudiniRampInterpolationType::InValid;
    this->InstanceIndex = -1;
    this->PositionParentParm = NULL;
    this->ValueParentParm = NULL;
    this->InterpolationParentParm = NULL;
}


