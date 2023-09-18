#include "AccelByteModelsV2PartyCreateRequest.h"

FAccelByteModelsV2PartyCreateRequest::FAccelByteModelsV2PartyCreateRequest() {
    this->Joinability = EAccelByteV2SessionJoinability::EMPTY;
    this->MaxPlayers = 0;
    this->MinPlayers = 0;
    this->InactiveTimeout = 0;
    this->InviteTimeout = 0;
    this->Type = EAccelByteV2SessionConfigurationServerType::EMPTY;
}

