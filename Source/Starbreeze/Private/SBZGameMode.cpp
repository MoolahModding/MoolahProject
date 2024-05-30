#include "SBZGameMode.h"
#include "SBZPlayerCharacter.h"
#include "SBZPlayerController.h"
#include "SBZPlayerState.h"
#include "SBZSpectatorPawn.h"

ASBZGameMode::ASBZGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ASBZPlayerController::StaticClass();
    this->PlayerStateClass = ASBZPlayerState::StaticClass();
    this->DefaultPawnClass = ASBZPlayerCharacter::StaticClass();
    this->SpectatorClass = ASBZSpectatorPawn::StaticClass();
}


