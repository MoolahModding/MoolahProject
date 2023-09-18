#include "SBZKickingInfo.h"

FSBZKickingInfo::FSBZKickingInfo() {
    this->bActive = false;
    this->VotesNeededToKick = 0;
    this->ModeKick = ESBZKickingMode::PartyDirectKicking;
    this->TimeLeft = 0.00f;
    this->bWasClientKicked = false;
}

