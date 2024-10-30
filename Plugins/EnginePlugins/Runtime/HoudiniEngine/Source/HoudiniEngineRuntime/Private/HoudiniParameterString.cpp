#include "HoudiniParameterString.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterString::UHoudiniParameterString() {
    this->ParmType = EHoudiniParameterType::String;
    this->bIsAssetRef = false;
}


