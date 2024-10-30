#include "HoudiniParameterColor.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterColor::UHoudiniParameterColor() {
    this->ParmType = EHoudiniParameterType::Color;
    this->bIsChildOfRamp = false;
}


