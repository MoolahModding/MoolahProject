#include "AccelByteModelsEntitlementUpdate.h"

FAccelByteModelsEntitlementUpdate::FAccelByteModelsEntitlementUpdate() {
    this->Clazz = EAccelByteEntitlementClass::NONE;
    this->Type = EAccelByteEntitlementType::NONE;
    this->Status = EAccelByteEntitlementStatus::NONE;
    this->AppType = EAccelByteAppType::NONE;
    this->UseCount = 0;
    this->Source = EAccelByteEntitlementSource::NONE;
    this->Origin = EAccelByteUserEntitlementOrigin::NONE;
    this->Stackable = false;
    this->StackedUseCount = 0;
}

