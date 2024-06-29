#include "SBZMissionGameMode.h"
#include "SBZCoverPointManager.h"
#include "SBZFirePermissionManager.h"
#include "SBZGameSpectatorPawn.h"
#include "SBZMissionState.h"
#include "SBZSpawnManager.h"

ASBZMissionGameMode::ASBZMissionGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = ASBZMissionState::StaticClass();
    this->SpectatorClass = ASBZGameSpectatorPawn::StaticClass();
    this->SpawnManager = CreateDefaultSubobject<USBZSpawnManager>(TEXT("SpawnManager"));
    this->AIVisibilityManager = NULL;
    this->CoverPointManager = CreateDefaultSubobject<USBZCoverPointManager>(TEXT("CoverPointManager"));
    this->FirePermissionManager = CreateDefaultSubobject<UDEPRECATED_SBZFirePermissionManager>(TEXT("FirePermissionManager"));
    this->MaxInactivePlayers = 16;
}

void ASBZMissionGameMode::OnActionPhaseStarted() {
}

void ASBZMissionGameMode::OnActionPhaseExited() {
}


