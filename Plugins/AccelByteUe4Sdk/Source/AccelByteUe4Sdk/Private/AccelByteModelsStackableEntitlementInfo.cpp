#include "AccelByteModelsStackableEntitlementInfo.h"

FAccelByteModelsStackableEntitlementInfo::FAccelByteModelsStackableEntitlementInfo() {
    this->Clazz = EAccelByteEntitlementClass::NONE;
    this->Type = EAccelByteEntitlementType::NONE;
    this->Status = EAccelByteEntitlementStatus::NONE;
    this->AppType = EAccelByteAppType::NONE;
    this->UseCount = 0;
    this->Quantity = 0;
    this->Source = EAccelByteEntitlementSource::NONE;
    this->DistributedQuantity = 0;
    this->Stackable = false;
    this->StackedUseCount = 0;
    this->StackedQuantity = 0;
}

