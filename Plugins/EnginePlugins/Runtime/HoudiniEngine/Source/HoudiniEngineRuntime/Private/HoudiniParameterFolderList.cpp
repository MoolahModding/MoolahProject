#include "HoudiniParameterFolderList.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterFolderList::UHoudiniParameterFolderList() {
    this->bIsTabMenu = false;
    this->bIsTabsShown = false;
    this->ParmType = EHoudiniParameterType::FolderList;
}


