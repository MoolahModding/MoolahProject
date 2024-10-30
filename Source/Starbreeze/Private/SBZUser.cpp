#include "SBZUser.h"

FSBZUser::FSBZUser() {
    this->Platform = ESBZPlatform::Unknown;
    this->FirstPartyPlatform = ESBZFirstPartyPlatform::Unknown;
    this->PresenceState = ESBZOnlinePresenceState::Unknown;
    this->LevelIndex = 0;
    this->InfamyLevel = 0;
    this->RenownLevel = 0;
    this->bIsBlocked = false;
    this->bPlatformBlocked = false;
    this->bPlatformPlayer = false;
    this->PlatformIcon = NULL;
    this->NebulaIcon = NULL;
    this->bCanCommunicateWith = false;
    this->bIsLocalPlayer = false;
    this->bIsPartyLeader = false;
}

