#include "HoudiniParameterFolderList.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterFolderList::UHoudiniParameterFolderList() {
    this->ParmType = EHoudiniParameterType::FolderList;
    this->bIsTabMenu = false;
    this->bIsTabsShown = false;
}


