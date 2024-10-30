#include "HoudiniParameterFolder.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterFolder::UHoudiniParameterFolder() {
    this->ParmType = EHoudiniParameterType::Folder;
    this->FolderType = EHoudiniFolderParameterType::Invalid;
    this->bExpanded = true;
    this->bChosen = false;
    this->ChildCounter = 0;
    this->bIsContentShown = false;
}


