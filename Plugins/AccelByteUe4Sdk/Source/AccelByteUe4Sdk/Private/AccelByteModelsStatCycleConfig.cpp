#include "AccelByteModelsStatCycleConfig.h"

FAccelByteModelsStatCycleConfig::FAccelByteModelsStatCycleConfig() {
    this->CycleType = EAccelByteCycle::DAILY;
    this->ResetDay = 0;
    this->ResetDate = 0;
    this->ResetMonth = 0;
    this->SeasonPeriod = 0;
    this->CurrentVersion = 0;
}

