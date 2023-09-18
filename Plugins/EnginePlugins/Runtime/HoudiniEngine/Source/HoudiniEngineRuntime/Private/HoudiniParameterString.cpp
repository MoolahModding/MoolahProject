#include "HoudiniParameterString.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterString::UHoudiniParameterString() {
    this->bIsAssetRef = false;
    this->ParmType = EHoudiniParameterType::String;
}


