#include "AccelByteModelsV2PartyUpdateRequest.h"

FAccelByteModelsV2PartyUpdateRequest::FAccelByteModelsV2PartyUpdateRequest() {
    this->Joinability = EAccelByteV2SessionJoinability::EMPTY;
    this->Version = 0;
    this->Type = EAccelByteV2SessionConfigurationServerType::EMPTY;
    this->InactiveTimeout = 0;
    this->InviteTimeout = 0;
    this->MinPlayers = 0;
    this->MaxPlayers = 0;
}

