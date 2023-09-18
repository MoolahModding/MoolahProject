#include "AccelByteModelsItemCriteriaV2.h"

FAccelByteModelsItemCriteriaV2::FAccelByteModelsItemCriteriaV2() {
    this->IncludeSubCategoryItem = false;
    this->ItemType = EAccelByteItemType::NONE;
    this->AppType = EAccelByteAppType::NONE;
    this->ActiveOnly = false;
    this->Offset = 0;
    this->Limit = 0;
}

