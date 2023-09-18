#include "AccelByteModelsMatchmakingNotice.h"

FAccelByteModelsMatchmakingNotice::FAccelByteModelsMatchmakingNotice() {
    this->Status = EAccelByteMatchmakingStatus::Unknown;
    this->Joinable = false;
    this->ErrorCode = 0;
}

