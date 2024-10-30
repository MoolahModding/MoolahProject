#include "HoudiniParameterMultiParm.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterMultiParm::UHoudiniParameterMultiParm() {
    this->ParmType = EHoudiniParameterType::MultiParm;
    this->bIsShown = false;
    this->Value = 0;
    this->MultiparmValue = 0;
    this->MultiParmInstanceNum = 0;
    this->MultiParmInstanceLength = 0;
    this->MultiParmInstanceCount = 0;
    this->InstanceStartOffset = 0;
    this->DefaultInstanceCount = 0;
}


