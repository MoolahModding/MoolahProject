#include "HoudiniParameterFile.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterFile::UHoudiniParameterFile() {
    this->bIsReadOnly = false;
    this->ParmType = EHoudiniParameterType::File;
}


