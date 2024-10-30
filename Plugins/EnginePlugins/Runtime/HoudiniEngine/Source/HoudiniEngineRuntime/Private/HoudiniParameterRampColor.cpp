#include "HoudiniParameterRampColor.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterRampColor::UHoudiniParameterRampColor() {
    this->ParmType = EHoudiniParameterType::ColorRamp;
    this->bCaching = false;
    this->NumDefaultPoints = -1;
}


