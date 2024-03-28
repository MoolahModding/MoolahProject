#include "AccelByteModelsV2ServerQueryGameSessionsRequest.h"

FAccelByteModelsV2ServerQueryGameSessionsRequest::FAccelByteModelsV2ServerQueryGameSessionsRequest() {
    this->Status = EAccelByteV2GameSessionDsStatus::EMPTY;
    this->StatusV2 = EAccelByteV2GameSessionDsStatus::EMPTY;
    this->Joinability = EAccelByteV2SessionJoinability::EMPTY;
    this->IsSoftDeleted = false;
    this->IsPersistent = false;
}

