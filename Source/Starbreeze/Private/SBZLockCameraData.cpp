#include "SBZLockCameraData.h"

FSBZLockCameraData::FSBZLockCameraData() {
    this->MinDampeningScale = 0.00f;
    this->MaxDampeningScale = 0.00f;
    this->bIsClampRelativeToCurrent = false;
    this->bIsDampeningUsed = false;
    this->bIsDampeningOnlyTowardLimit = false;
    this->bIsControlRotationAffected = false;
    this->bIsControlRotationChangeAllowed = false;
    this->bIsOnlyControlRotationAffected = false;
    this->Priority = 0;
}

