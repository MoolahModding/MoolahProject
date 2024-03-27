#include "AccelByteModelsItemCriteriaV3.h"

FAccelByteModelsItemCriteriaV3::FAccelByteModelsItemCriteriaV3() {
    this->IncludeSubCategoryItem = false;
    this->ItemType = EAccelByteItemType::NONE;
    this->AppType = EAccelByteAppType::NONE;
    this->ItemStatus = EAccelByteItemStatus::NONE;
    this->bSectionExclusive = false;
    this->Offset = 0;
    this->Limit = 0;
}

