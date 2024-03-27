#include "AccelByteModelsItemInfoV2.h"

FAccelByteModelsItemInfoV2::FAccelByteModelsItemInfoV2() {
    this->SeasonType = EAccelByteSeasonType::PASS;
    this->EntitlementType = EAccelByteEntitlementType::NONE;
    this->UseCount = 0;
    this->Stackable = false;
    this->Status = EAccelByteItemStatus::NONE;
    this->Listable = false;
    this->Purchasable = false;
    this->bSectionExclusive = false;
    this->ItemType = EAccelByteItemType::NONE;
    this->MaxCountPerUser = 0;
    this->MaxCount = 0;
    this->DisplayOrder = 0;
    this->bSellable = false;
    this->Sellable = false;
}

