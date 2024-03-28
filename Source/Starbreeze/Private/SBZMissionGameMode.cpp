#include "SBZMissionGameMode.h"
#include "SBZCoverPointManager.h"
#include "SBZFirePermissionManager.h"
#include "SBZSpawnManager.h"

void ASBZMissionGameMode::OnActionPhaseStarted() {
}

void ASBZMissionGameMode::OnActionPhaseExited() {
}

ASBZMissionGameMode::ASBZMissionGameMode(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnManager = CreateDefaultSubobject<USBZSpawnManager>(TEXT("SpawnManager"));
    this->AIVisibilityManager = NULL;
    this->CoverPointManager = CreateDefaultSubobject<USBZCoverPointManager>(TEXT("CoverPointManager"));
    this->FirePermissionManager = CreateDefaultSubobject<UDEPRECATED_SBZFirePermissionManager>(TEXT("FirePermissionManager"));
    this->MaxInactivePlayers = 16;
}

