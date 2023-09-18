#include "AccelByteModelsV2BaseSession.h"

FAccelByteModelsV2BaseSession::FAccelByteModelsV2BaseSession() {
    this->IsActive = false;
    this->Version = 0;
    this->SessionType = EAccelByteV2SessionType::Unknown;
}

