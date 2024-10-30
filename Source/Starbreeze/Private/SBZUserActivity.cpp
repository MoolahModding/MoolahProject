#include "SBZUserActivity.h"

FSBZUserActivity::FSBZUserActivity() {
    this->Port = 0;
    this->PortBeacon = 0;
    this->LevelIdx = 0;
    this->bCrossPlayEnabled = false;
    this->bInCrossPlayLobby = false;
    this->bInCrossPlayAllowedLobby = false;
    this->JoinType = ESBZOnlineJoinType::Debug_DEPRECATED;
    this->GameSessionMembers = 0;
    this->PartySessionMembers = 0;
    this->InfamyPoints = 0;
    this->RenownLevel = 0;
    this->HostingProvider = ESBZHostingProvider::Accelbyte;
    this->bIsHost = false;
    this->DifficultyIdx = 0;
    this->TacticIdx = ESBZOnlineTacticType::Default;
}

