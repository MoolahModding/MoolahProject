#include "SBZLobbyCharacterInfoUi.h"

FSBZLobbyCharacterInfoUi::FSBZLobbyCharacterInfoUi() {
    this->PawnClass = NULL;
    this->PawnClass = NULL;
    this->bAsyncLoadInProgress = false;
    this->bIsPlayerReady = false;
    this->bPlayerAcceptedMatch = false;
    this->LevelIdx = 0;
    this->PowerLevel = 0;
    this->SlotStatus = ESBZSlotStatus::Default;
    this->Platform = ESBZPlatform::Windows;
    this->InfamyLevel = 0;
}

