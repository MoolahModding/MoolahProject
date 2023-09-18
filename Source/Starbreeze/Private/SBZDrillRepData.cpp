#include "SBZDrillRepData.h"

FSBZDrillRepData::FSBZDrillRepData() {
    this->State = ESBZDrillState::None;
    this->ProgressLast = 0.00f;
    this->HeatLast = 0.00f;
    this->HeatPerSec = 0.00f;
    this->ProgressPerSec = 0.00f;
    this->LastTime = 0.00f;
    this->bFastSpeed = false;
    this->CurrentMaterial = NULL;
}

