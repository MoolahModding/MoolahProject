#include "AccelByteModelsItemRecurring.h"

FAccelByteModelsItemRecurring::FAccelByteModelsItemRecurring() {
    this->Cycle = EAccelByteCycle::WEEKLY;
    this->FixedFreeDays = 0;
    this->FixedTrialCycles = 0;
    this->GraceDays = 0;
}

