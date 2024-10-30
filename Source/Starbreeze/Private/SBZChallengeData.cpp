#include "SBZChallengeData.h"

FSBZChallengeData::FSBZChallengeData() {
    this->ChallengeStatus = EChallengeStatusEnum::INIT;
    this->InfamyPointReward = 0;
    this->DailyCreationObjectiveStartStatValue = 0;
    this->TotalProgress = 0;
    this->TotalTarget = 0;
    this->ChallengeConversion = ESBZChallengeConversion::None;
    this->IsActive = false;
}

