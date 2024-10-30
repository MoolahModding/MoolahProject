#include "HoudiniParameterChoice.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterChoice::UHoudiniParameterChoice() {
    this->ParmType = EHoudiniParameterType::IntChoice;
    this->IntValue = -1;
    this->DefaultIntValue = 0;
    this->bIsChildOfRamp = false;
}


