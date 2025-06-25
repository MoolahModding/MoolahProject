#include "SBZGameModeMainMenu.h"
#include "SBZMainMenuSpectatorPawn.h"
#include "SBZPlayerControllerMainMenu.h"

ASBZGameModeMainMenu::ASBZGameModeMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ASBZPlayerControllerMainMenu::StaticClass();
    this->SpectatorClass = ASBZMainMenuSpectatorPawn::StaticClass();
    this->ReplaySpectatorPlayerControllerClass = ASBZPlayerControllerMainMenu::StaticClass();
}

void ASBZGameModeMainMenu::SetMainMenuState(ESBZMainMenuState NewState) {
}

ESBZMainMenuState ASBZGameModeMainMenu::GetMainMenuState() const {
    return ESBZMainMenuState::MainScreen;
}


