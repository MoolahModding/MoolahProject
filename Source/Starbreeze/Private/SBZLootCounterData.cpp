#include "SBZLootCounterData.h"

FSBZLootCounterData::FSBZLootCounterData() {
    this->CurrentLootCount = 0.00f;
    this->DesiredLootCount = 0.00f;
    this->TickingLootType = ESBZTickingLootType::NotTicking;
}

