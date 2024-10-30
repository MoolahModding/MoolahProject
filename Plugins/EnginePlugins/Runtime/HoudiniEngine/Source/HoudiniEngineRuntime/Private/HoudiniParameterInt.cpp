#include "HoudiniParameterInt.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterInt::UHoudiniParameterInt() {
    this->ParmType = EHoudiniParameterType::Int;
    this->bHasMin = false;
    this->bHasMax = false;
    this->bHasUIMin = false;
    this->bHasUIMax = false;
    this->bIsLogarithmic = false;
    this->Min = 0;
    this->Max = 0;
    this->UIMin = 0;
    this->UIMax = 0;
}


