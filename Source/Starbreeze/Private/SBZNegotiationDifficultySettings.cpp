#include "SBZNegotiationDifficultySettings.h"

FSBZNegotiationDifficultySettings::FSBZNegotiationDifficultySettings() {
    this->BaseNrHostagesRequired = 0;
    this->NrHostagesToAddPerDemand = 0;
    this->BaseTime = 0.00f;
    this->BonusTime = 0.00f;
    this->DemandInterval = 0.00f;
    this->RemainingTimeDemandThreshold = 0.00f;
    this->DelayAssaultSeconds = 0.00f;
    this->ReducePlayerSpectateSeconds = 0.00f;
    this->CivilianKilledExtraTime = 0.00f;
    this->MaxExtraCustodyTime = 0.00f;
}

