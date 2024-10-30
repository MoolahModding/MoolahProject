#include "HoudiniParameterRampFloat.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterRampFloat::UHoudiniParameterRampFloat() {
    this->ParmType = EHoudiniParameterType::FloatRamp;
    this->NumDefaultPoints = -1;
    this->bCaching = false;
}


