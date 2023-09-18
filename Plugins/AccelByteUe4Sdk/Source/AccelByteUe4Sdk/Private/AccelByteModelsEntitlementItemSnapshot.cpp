#include "AccelByteModelsEntitlementItemSnapshot.h"

FAccelByteModelsEntitlementItemSnapshot::FAccelByteModelsEntitlementItemSnapshot() {
    this->AppType = EAccelByteAppType::NONE;
    this->Listable = false;
    this->EntitlementType = EAccelByteEntitlementType::NONE;
    this->UseCount = 0;
    this->Stackable = false;
    this->Purchasable = false;
    this->ItemType = EAccelByteItemType::NONE;
    this->MaxCountPerUser = 0;
    this->MaxCount = 0;
}

