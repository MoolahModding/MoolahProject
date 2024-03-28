#include "SBZFriendListEntry.h"

FSBZFriendListEntry::FSBZFriendListEntry() {
    this->FriendStatus = EFriendStatus::Offline;
    this->LevelIdx = 0;
    this->bPlatformBlocked = false;
    this->bPlatformPlayer = false;
    this->PlatformIcon = NULL;
    this->NebulaIcon = NULL;
    this->bCanCommunicateWith = false;
}

