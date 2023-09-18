#include "HoudiniParameterRampColor.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterRampColor::UHoudiniParameterRampColor() {
    this->bCaching = false;
    this->NumDefaultPoints = -1;
    this->ParmType = EHoudiniParameterType::ColorRamp;
}


