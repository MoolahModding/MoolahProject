#include "SBZCashRewardData.h"

FSBZCashRewardData::FSBZCashRewardData() {
    this->TotalCashValue = 0;
    this->TotalCashEarned = 0;
    this->LootCashValue = 0;
    this->TickingLootValue = 0;
    this->MaxTickingLootValue = 0;
    this->CashFromChallenges = 0;
    this->CashRewardOperationResult = ESBZMetaRequestResult::Ok;
}

