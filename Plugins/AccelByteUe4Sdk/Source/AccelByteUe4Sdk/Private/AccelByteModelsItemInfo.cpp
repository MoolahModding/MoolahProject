#include "AccelByteModelsItemInfo.h"

FAccelByteModelsItemInfo::FAccelByteModelsItemInfo() {
    this->SeasonType = EAccelByteSeasonType::PASS;
    this->EntitlementType = EAccelByteEntitlementType::NONE;
    this->UseCount = 0;
    this->Stackable = false;
    this->Status = EAccelByteItemStatus::NONE;
    this->Listable = false;
    this->Purchasable = false;
    this->SectionExclusive = false;
    this->ItemType = EAccelByteItemType::NONE;
    this->MaxCountPerUser = 0;
    this->MaxCount = 0;
    this->DisplayOrder = 0;
    this->Fresh = false;
    this->bSellable = false;
    this->Sellable = false;
    this->Flexible = false;
}

