#include "HoudiniParameterFloat.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterFloat::UHoudiniParameterFloat() {
    this->bNoSwap = false;
    this->bHasMin = false;
    this->bHasMax = false;
    this->bHasUIMin = false;
    this->bHasUIMax = false;
    this->bIsLogarithmic = false;
    this->Min = -340282346638528859811704183484516925440.00f;
    this->Max = 340282346638528859811704183484516925440.00f;
    this->UIMin = -340282346638528859811704183484516925440.00f;
    this->UIMax = 340282346638528859811704183484516925440.00f;
    this->bIsChildOfRamp = false;
    this->ParmType = EHoudiniParameterType::Float;
}


