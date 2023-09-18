#include "SBZWorldSettings.h"

ASBZWorldSettings::ASBZWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceTypesConfig = NULL;
    this->MusicEvent = NULL;
    this->StopMusicEvent = NULL;
    this->bStartMusicOnBeginPlay = true;
    this->bIsSoloMusicStartOnActionPhase = true;
    this->bStopMusicOnEndPlay = true;
    this->bIsMusicMainMenu = false;
    this->bSkipNegotiation = true;
    this->bSkipFirstResponders = true;
    this->TimeToNextState = 30.00f;
    this->bStartInCasing = true;
    this->bAICrewStartInCasing = true;
    this->bStartWithAICrew = true;
    this->bIsInRandomSublevel = false;
    this->AssaultManagerSettings = NULL;
    this->NegotiationManagerSettings = NULL;
    this->CivilianManagerSettings = NULL;
    this->TrafficManagerSettings = NULL;
    this->LifeActionSettings = NULL;
    this->SoloPlayerLoadoutOverride = NULL;
}


