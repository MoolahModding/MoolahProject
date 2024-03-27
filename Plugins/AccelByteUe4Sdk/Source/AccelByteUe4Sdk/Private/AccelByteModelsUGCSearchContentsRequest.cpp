#include "AccelByteModelsUGCSearchContentsRequest.h"

FAccelByteModelsUGCSearchContentsRequest::FAccelByteModelsUGCSearchContentsRequest() {
    this->bIsOfficial = false;
    this->bIsHidden = false;
    this->SortBy = EAccelByteUgcSortBy::NAME;
    this->OrderBy = EAccelByteUgcOrderBy::ASC;
}

