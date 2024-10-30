#include "SBZHoldOutObjectiveBase.h"

USBZHoldOutObjectiveBase::USBZHoldOutObjectiveBase() {
    this->bReverseCondition = false;
    this->bIsOptional = false;
    this->bBroadcastProgressChanged = true;
    this->bEnableUIObjectiveOnSelected = false;
    this->UIObjective = NULL;
}

bool USBZHoldOutObjectiveBase::IsOptional() const {
    return false;
}

bool USBZHoldOutObjectiveBase::IsActive() const {
    return false;
}

int32 USBZHoldOutObjectiveBase::GetProgressCount() const {
    return 0;
}

float USBZHoldOutObjectiveBase::GetProgress() const {
    return 0.0f;
}

int32 USBZHoldOutObjectiveBase::GetMaxProgressCount() const {
    return 0;
}


