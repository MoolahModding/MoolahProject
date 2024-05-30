#include "SBZReplayGameMode.h"
#include "SBZPlayerState.h"
#include "SBZReplayPlayerController.h"

ASBZReplayGameMode::ASBZReplayGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ASBZReplayPlayerController::StaticClass();
    this->PlayerStateClass = ASBZPlayerState::StaticClass();
}


