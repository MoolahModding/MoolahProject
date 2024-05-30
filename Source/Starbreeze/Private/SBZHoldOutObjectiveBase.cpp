#include "SBZHoldOutObjectiveBase.h"

USBZHoldOutObjectiveBase::USBZHoldOutObjectiveBase() {
    this->bReverseCondition = false;
    this->bIsOptional = false;
    this->UIObjective = NULL;
}

bool USBZHoldOutObjectiveBase::IsOptional() const {
    return false;
}

bool USBZHoldOutObjectiveBase::IsActive() const {
    return false;
}

int32 USBZHoldOutObjectiveBase::GetUIObjectiveProgress() const {
    return 0;
}

int32 USBZHoldOutObjectiveBase::GetUIObjectiveMaxProgress() const {
    return 0;
}

float USBZHoldOutObjectiveBase::GetProgress() const {
    return 0.0f;
}


