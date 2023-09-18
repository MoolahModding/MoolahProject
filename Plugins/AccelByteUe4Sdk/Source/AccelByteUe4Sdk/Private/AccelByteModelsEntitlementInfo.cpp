#include "AccelByteModelsEntitlementInfo.h"

FAccelByteModelsEntitlementInfo::FAccelByteModelsEntitlementInfo() {
    this->Clazz = EAccelByteEntitlementClass::NONE;
    this->Type = EAccelByteEntitlementType::NONE;
    this->Status = EAccelByteEntitlementStatus::NONE;
    this->AppType = EAccelByteAppType::NONE;
    this->UseCount = 0;
    this->Source = EAccelByteEntitlementSource::NONE;
    this->Stackable = false;
    this->Replayed = false;
}

