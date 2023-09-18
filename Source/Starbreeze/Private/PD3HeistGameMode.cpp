#include "PD3HeistGameMode.h"
#include "PD3AssaultManager.h"
#include "PD3HeistGameSession.h"
#include "PD3HeistGameState.h"
#include "SBZAISearchManager.h"
#include "SBZAISquadManager.h"
#include "SBZCivilianManager.h"
#include "SBZGlobalModifiers.h"
#include "SBZNavLinkManager.h"
#include "SBZNegotiationManager.h"
#include "SBZTrafficManager.h"

APD3HeistGameMode::APD3HeistGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NegotiationManager = CreateDefaultSubobject<USBZNegotiationManager>(TEXT("SBZNegotiationManager"));
    this->AssaultManager = CreateDefaultSubobject<UPD3AssaultManager>(TEXT("AssaultManager"));
    this->AISquadManager = CreateDefaultSubobject<USBZAISquadManager>(TEXT("SBZAISquadManager"));
    this->CivilianManager = CreateDefaultSubobject<USBZCivilianManager>(TEXT("SBZCivilianManager"));
    this->NavLinkManager = CreateDefaultSubobject<USBZNavLinkManager>(TEXT("SBZNavLinkManager"));
    this->ChatInGame = NULL;
    this->TrafficManager = CreateDefaultSubobject<USBZTrafficManager>(TEXT("SBZTrafficManager"));
    this->SearchManager = CreateDefaultSubobject<USBZAISearchManager>(TEXT("SBZAISearchManager"));
    this->GlobalModifiers = CreateDefaultSubobject<USBZGlobalModifiers>(TEXT("SBZGlobalModifiers"));
    this->GameSessionClass = APD3HeistGameSession::StaticClass();
    this->GameStateClass = APD3HeistGameState::StaticClass();
}

USBZNegotiationManager* APD3HeistGameMode::GetNegotiationManager() const {
    return NULL;
}


