#include "SBZCharacterInventoryData.h"

FSBZCharacterInventoryData::FSBZCharacterInventoryData() {
    this->CharacterData = NULL;
    this->bCharacterLocked = false;
    this->CharacterLockReason = ESBZCharacterLockReason::NotLocked;
    this->SelectedIndex = 0;
}

