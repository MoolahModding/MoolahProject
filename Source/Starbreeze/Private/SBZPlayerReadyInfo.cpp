#include "SBZPlayerReadyInfo.h"

FSBZPlayerReadyInfo::FSBZPlayerReadyInfo() {
    this->PlayerReadyStatusValue = EPlayerReadyStatusValue::Loading;
    this->Platform = ESBZPlatform::Unknown;
    this->FirstPartyPlatform = ESBZFirstPartyPlatform::Unknown;
    this->InfamyLevel = 0;
}

