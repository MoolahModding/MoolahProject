#include "SBZLevelScriptMainMenuActor.h"

void ASBZLevelScriptMainMenuActor::PostInitializeComponents() {
}

void ASBZLevelScriptMainMenuActor::OnLobbyUpdate(ESBZOnlineCode ErrorCode) {
}

void ASBZLevelScriptMainMenuActor::OnLoadoutChanged(const TArray<FSBZLobbyCharacterInfoUi>& LobbyInfoArray) {
}

void ASBZLevelScriptMainMenuActor::OnLeft() {
}

ASBZLevelScriptMainMenuActor::ASBZLevelScriptMainMenuActor() {
    this->MainMenuMannequin = NULL;
    this->CustomizationManager = NULL;
    this->MainMenuCameraManager = NULL;
}

