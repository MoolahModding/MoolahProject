#include "HoudiniParameterChoice.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterChoice::UHoudiniParameterChoice() {
    this->IntValue = -1;
    this->DefaultIntValue = 0;
    this->bIsChildOfRamp = false;
    this->ParmType = EHoudiniParameterType::IntChoice;
}


