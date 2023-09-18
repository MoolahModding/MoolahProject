#include "HoudiniParameterColor.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterColor::UHoudiniParameterColor() {
    this->bIsChildOfRamp = false;
    this->ParmType = EHoudiniParameterType::Color;
}


