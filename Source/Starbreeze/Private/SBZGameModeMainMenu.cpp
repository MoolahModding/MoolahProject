#include "SBZGameModeMainMenu.h"

void ASBZGameModeMainMenu::SetMainMenuState(ESBZMainMenuState NewState) {
}

ESBZMainMenuState ASBZGameModeMainMenu::GetMainMenuState() const {
    return ESBZMainMenuState::MainScreen;
}

ASBZGameModeMainMenu::ASBZGameModeMainMenu(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

