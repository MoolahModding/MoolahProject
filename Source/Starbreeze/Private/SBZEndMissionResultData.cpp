#include "SBZEndMissionResultData.h"

FSBZEndMissionResultData::FSBZEndMissionResultData() {
    this->TickingLootProgress = 0.00f;
    this->MissionResult = ESBZEndMissionResult::Fail;
    this->MissionTime = 0.00f;
    this->BagTotal = 0;
    this->CompletedAssaultWaveCount = 0;
    this->bIsFinalAssaultTriggered = false;
}

