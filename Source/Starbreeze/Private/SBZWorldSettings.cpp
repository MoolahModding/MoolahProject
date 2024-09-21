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
    this->bCanCrewShootStreetCops = false;
    this->bIsInRandomSublevel = false;
    this->AudioVolumetricCullingDepth = 1;
    this->AssaultManagerSettings = NULL;
    this->NegotiationManagerSettings = NULL;
    this->CivilianManagerSettings = NULL;
    this->TrafficManagerSettings = NULL;
    this->LifeActionSettings = NULL;
    this->SoloPlayerLoadoutOverride = NULL;
    this->bOverrideAIDPS = false;
    this->bIsUsingSystemicBagCount = false;
    this->bIsUsingBagCountdown = true;
    this->StartBagCountdownFrom = 5;
    this->bIsUsingLastSecureBagVOOverride = false;
    this->LastSecureBagVOOverride = NULL;
}


