#include "SBZUserActivity.h"

FSBZUserActivity::FSBZUserActivity() {
    this->Port = 0;
    this->PortBeacon = 0;
    this->LevelIdx = 0;
    this->bCrossPlayEnabled = false;
    this->bInCrossPlayLobby = false;
    this->bInCrossPlayAllowedLobby = false;
    this->JoinType = ESBZOnlineJoinType::Debug;
    this->GameSessionMembers = 0;
    this->PartySessionMembers = 0;
}

