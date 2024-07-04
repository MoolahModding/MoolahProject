#include "SBZTestGameMode.h"
#include "SBZGameSpectatorPawn.h"
#include "SBZTestGameState.h"

ASBZTestGameMode::ASBZTestGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = ASBZTestGameState::StaticClass();
    this->DefaultPawnClass = ASBZGameSpectatorPawn::StaticClass();
}


