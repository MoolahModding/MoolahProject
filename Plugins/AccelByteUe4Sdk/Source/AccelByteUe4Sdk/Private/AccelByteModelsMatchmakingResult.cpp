#include "AccelByteModelsMatchmakingResult.h"

FAccelByteModelsMatchmakingResult::FAccelByteModelsMatchmakingResult() {
    this->Joinable = false;
    this->Queued_at = 0;
    this->Status = EAccelByteMatchmakingSessionStatus::None;
}

