#include "AccelByteModelsItemRecurring.h"

FAccelByteModelsItemRecurring::FAccelByteModelsItemRecurring() {
    this->Cycle = EAccelByteCycle::DAILY;
    this->FixedFreeDays = 0;
    this->FixedTrialCycles = 0;
    this->GraceDays = 0;
}

