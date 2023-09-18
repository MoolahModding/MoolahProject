#include "SBZPlayerUiItemInfo.h"

FSBZPlayerUiItemInfo::FSBZPlayerUiItemInfo() {
    this->bIsAvailable = false;
    this->InfamyLevel = 0;
    this->ItemProgressionSource = ESBZItemProgressionSource::InfamyLevel;
    this->SkillLineToUnlock = NULL;
    this->InventoryBaseData = NULL;
}

