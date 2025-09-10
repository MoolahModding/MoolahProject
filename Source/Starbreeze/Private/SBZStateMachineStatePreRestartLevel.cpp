#include "SBZStateMachineStatePreRestartLevel.h"

USBZStateMachineStatePreRestartLevel::USBZStateMachineStatePreRestartLevel() {
    this->LoadingScreen = NULL;
}

void USBZStateMachineStatePreRestartLevel::OnP2PHostBeaconClientReady(const FUniqueNetIdRepl& InPlayerId, const FString& InDisplayName) {
}

void USBZStateMachineStatePreRestartLevel::OnP2PHostBeaconClientDisconnected(const FUniqueNetIdRepl& InPlayerId) {
}

void USBZStateMachineStatePreRestartLevel::OnClientStartSeamlessTravel(const FUniqueNetIdRepl& InPlayerId) {
}

void USBZStateMachineStatePreRestartLevel::HandleInitializeHostMigrationTravelHost() {
}

void USBZStateMachineStatePreRestartLevel::HandleInitializeHostMigrationTravelClient() {
}

void USBZStateMachineStatePreRestartLevel::HandleBeaconDisconnect() {
}


