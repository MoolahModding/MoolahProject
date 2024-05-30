#include "SBZEndMissionResultData.h"

FSBZEndMissionResultData::FSBZEndMissionResultData() {
    this->MissionResult = ESBZEndMissionResult::Fail;
    this->MissionTime = 0.00f;
    this->BagTotal = 0;
    this->CompletedAssaultWaveCount = 0;
    this->bIsFinalAssaultTriggered = false;
}

