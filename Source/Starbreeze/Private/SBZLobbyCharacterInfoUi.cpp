#include "SBZLobbyCharacterInfoUi.h"

FSBZLobbyCharacterInfoUi::FSBZLobbyCharacterInfoUi() {
    this->PawnClass = NULL;
    this->bAsyncLoadInProgress = false;
    this->bIsPlayerReady = false;
    this->bPlayerAcceptedMatch = false;
    this->LevelIdx = 0;
    this->PowerLevel = 0;
    this->SlotStatus = ESBZSlotStatus::Default;
    this->Platform = ESBZPlatform::Unknown;
    this->FirstPartyPlatform = ESBZFirstPartyPlatform::Unknown;
    this->InfamyLevel = 0;
}

