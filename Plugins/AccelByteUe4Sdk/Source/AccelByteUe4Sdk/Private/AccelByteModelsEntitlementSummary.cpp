#include "AccelByteModelsEntitlementSummary.h"

FAccelByteModelsEntitlementSummary::FAccelByteModelsEntitlementSummary() {
    this->Clazz = EAccelByteEntitlementClass::NONE;
    this->Type = EAccelByteEntitlementType::NONE;
    this->Stackable = false;
    this->StackedUseCount = 0;
    this->StackedQuantity = 0;
}

