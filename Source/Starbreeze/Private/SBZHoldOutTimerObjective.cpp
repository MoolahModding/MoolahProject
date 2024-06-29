#include "SBZHoldOutTimerObjective.h"

USBZHoldOutTimerObjective::USBZHoldOutTimerObjective() {
    this->ModifiableTimerActor = NULL;
    this->Duration = 60.00f;
}

void USBZHoldOutTimerObjective::OnTimerProgressionReached(int32 ProgressionIndex) {
}

void USBZHoldOutTimerObjective::OnTimerFinished() {
}


