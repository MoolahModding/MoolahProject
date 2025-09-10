#include "SBZPlayerEndMissionResultData.h"

FSBZPlayerEndMissionResultData::FSBZPlayerEndMissionResultData() {
    this->bPlayerRewardsUpdated = false;
    this->PlayerStateId = 0;
    this->bHasBeenInCustody = false;
    this->SurvivedAssaultWaves = 0;
    this->AmmoPickupCreated = 0;
    this->AmmoPickupRemoved = 0;
    this->RequestOverkillCount = 0;
    this->bPlayerDisconnected = false;
}

