#include "SBZFriendListEntry.h"

FSBZFriendListEntry::FSBZFriendListEntry() {
    this->PortGame = 0;
    this->PortBeacon = 0;
    this->LevelIdx = 0;
    this->FriendStatus = EFriendStatus::Offline;
    this->JoinType = ESBZOnlineJoinType::Debug;
    this->bPlatformBlocked = false;
    this->bPlatformPlayer = false;
    this->PlatformIcon = NULL;
    this->NebulaIcon = NULL;
    this->bCrossPlayEnabled = false;
    this->bInCrossPlayLobby = false;
    this->bCrossPlayAllowed = false;
    this->bCanCommunicateWith = false;
}

