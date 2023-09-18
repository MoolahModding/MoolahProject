#include "HoudiniParameterRampFloat.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterRampFloat::UHoudiniParameterRampFloat() {
    this->NumDefaultPoints = -1;
    this->bCaching = false;
    this->ParmType = EHoudiniParameterType::FloatRamp;
}


