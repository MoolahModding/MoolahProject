#include "AccelByteModelsUserOrdersRequest.h"

FAccelByteModelsUserOrdersRequest::FAccelByteModelsUserOrdersRequest() {
    this->Status = EAccelByteOrderStatus::NONE;
    this->Offset = 0;
    this->Limit = 0;
}

