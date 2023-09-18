#include "SBZSlotData.h"

FSBZSlotData::FSBZSlotData() {
    this->PlayerState = NULL;
    this->Status = ESBZSlotStatus::Default;
    this->bMatchAccepted = false;
    this->bPreMatchReady = false;
    this->bJobOverviewReady = false;
    this->bHaveGameState = false;
    this->bReserved = false;
    this->bLoadingComplete = false;
    this->bTraveling = false;
    this->bHasLoadoutData = false;
    this->bStayAsParty = false;
    this->Platform = ESBZPlatform::Windows;
    this->InfamyLevel = 0;
    this->bCrossPlayEnabled = false;
}

