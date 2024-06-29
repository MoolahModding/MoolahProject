#include "SBZLevelScriptMainMenuActor.h"

ASBZLevelScriptMainMenuActor::ASBZLevelScriptMainMenuActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainMenuMannequin = NULL;
    this->CustomizationManager = NULL;
    this->MainMenuCameraManager = NULL;
}

void ASBZLevelScriptMainMenuActor::PostInitializeComponents() {
}

void ASBZLevelScriptMainMenuActor::OnLobbyUpdate(ESBZOnlineCode ErrorCode) {
}

void ASBZLevelScriptMainMenuActor::OnLoadoutChangedSolo(const TArray<FSBZLobbyCharacterInfoUi>& LobbyInfoArray) {
}

void ASBZLevelScriptMainMenuActor::OnLoadoutChanged(const TArray<FSBZLobbyCharacterInfoUi>& LobbyInfoArray) {
}

void ASBZLevelScriptMainMenuActor::OnLeft() {
}


