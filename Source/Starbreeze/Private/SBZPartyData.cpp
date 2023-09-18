#include "SBZPartyData.h"

FSBZPartyData::FSBZPartyData() {
    this->OwnerId = 0;
    this->OwnerIndex = 0;
    this->HostState = ESBZOnlineSessionPhase::Undefined;
    this->bIsQuickPlay = false;
    this->MissionSchematicIdx = 0;
    this->MissionDifficultyIdx = 0;
}

