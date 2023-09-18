#include "AccelByteModelsV2GameSessionBaseRequest.h"

FAccelByteModelsV2GameSessionBaseRequest::FAccelByteModelsV2GameSessionBaseRequest() {
    this->Type = EAccelByteV2SessionConfigurationServerType::EMPTY;
    this->Joinability = EAccelByteV2SessionJoinability::EMPTY;
    this->MaxPlayers = 0;
    this->MinPlayers = 0;
    this->InactiveTimeout = 0;
    this->InviteTimeout = 0;
}

