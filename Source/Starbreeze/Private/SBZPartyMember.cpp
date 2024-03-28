#include "SBZPartyMember.h"

FSBZPartyMember::FSBZPartyMember() {
    this->PlatformIcon = NULL;
    this->NebulaIcon = NULL;
    this->Platform = ESBZPlatform::Unknown;
    this->FirstPartyPlatform = ESBZFirstPartyPlatform::Unknown;
    this->bIsPartyLeader = false;
}

