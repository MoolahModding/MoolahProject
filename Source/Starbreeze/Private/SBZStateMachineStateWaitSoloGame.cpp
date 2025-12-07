#include "SBZStateMachineStateWaitSoloGame.h"

USBZStateMachineStateWaitSoloGame::USBZStateMachineStateWaitSoloGame() {
    this->LoadingScreen = NULL;
    this->MatchmakingData = NULL;
}

void USBZStateMachineStateWaitSoloGame::OnServerRetrieveEntitlementsDone(ESBZMetaRequestResult Result) {
}

void USBZStateMachineStateWaitSoloGame::OnLoadChallengesDone(const ESBZMetaRequestResult Result) {
}

void USBZStateMachineStateWaitSoloGame::OnFetchMapConfigurationDataDone(const ESBZMetaRequestResult Result, const FString& InMapAssetName, FSBZMatchmakingSessionResult InMatchmakingResult) {
}

void USBZStateMachineStateWaitSoloGame::OnExit() {
}

void USBZStateMachineStateWaitSoloGame::OnAsyncLoadAssetDatabaseDone() {
}


