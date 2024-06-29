#include "SBZStateMachineStateWaitSoloGame.h"

USBZStateMachineStateWaitSoloGame::USBZStateMachineStateWaitSoloGame() {
    this->LoadingScreen = NULL;
}

void USBZStateMachineStateWaitSoloGame::PlayerSpawnDelay() {
}

void USBZStateMachineStateWaitSoloGame::OnServerRetrieveEntitlementsDone(ESBZMetaRequestResult Result) {
}

void USBZStateMachineStateWaitSoloGame::OnServerGameRecordsReceived(const ESBZMetaRequestResult& Result) {
}

void USBZStateMachineStateWaitSoloGame::OnLoadChallengesDone(const ESBZMetaRequestResult& Result) {
}

void USBZStateMachineStateWaitSoloGame::OnGetSkuToItemIdMappingForItemsToGrantDone(ESBZMetaRequestResult Result) {
}

void USBZStateMachineStateWaitSoloGame::OnFetchMapConfigurationDataDone(const ESBZMetaRequestResult& Result, const FString& InMapAssetName, FSBZMatchmakingSessionResult InMatchmakingResult) {
}

void USBZStateMachineStateWaitSoloGame::OnAsyncLoadAssetDatabaseDone() {
}


