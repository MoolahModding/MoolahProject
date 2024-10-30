#include "SBZOnlineSessionParams.h"

FSBZOnlineSessionParams::FSBZOnlineSessionParams() {
    this->SessionPhase = ESBZOnlineSessionPhase::Undefined;
    this->bIsParty = false;
    this->JoinType = ESBZOnlineJoinType::Debug_DEPRECATED;
    this->LevelIdx = 0;
    this->DifficultyIdx = 0;
    this->bIsDebugSession = false;
    this->FreeSlots = 0;
    this->bIgnoreFullSession = false;
    this->SessionType = ESBZServerSessionType::ListenServer;
    this->NetworkVersion = 0;
    this->PingInMs = 0;
}

