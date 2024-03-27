#include "AccelByteModelsV2SessionConfiguration.h"

FAccelByteModelsV2SessionConfiguration::FAccelByteModelsV2SessionConfiguration() {
    this->Type = EAccelByteV2SessionConfigurationServerType::EMPTY;
    this->Joinability = EAccelByteV2SessionJoinability::EMPTY;
    this->MinPlayers = 0;
    this->MaxPlayers = 0;
    this->InactiveTimeout = 0;
    this->InviteTimeout = 0;
    this->TextChat = false;
    this->Persistent = false;
    this->AutoJoin = false;
}

