#include "SBZStatisticCriteriaData.h"

USBZStatisticCriteriaData::USBZStatisticCriteriaData() {
    this->LowestDifficulty = ESBZDifficulty::Default;
    this->MinPassableState = EPD3HeistState::Stealth;
    this->MaxPassableState = EPD3HeistState::PointOfNoReturn;
    this->bUseCompletionTime = false;
    this->CompletionTime = 120.00f;
    this->bRequiresNoKill = false;
    this->bRequiresAllLoot = false;
    this->bHasLevelCriteria = false;
}


