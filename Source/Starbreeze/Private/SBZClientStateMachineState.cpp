#include "SBZClientStateMachineState.h"

const FName USBZClientStateMachineStates::NotLoggedIn = FName(TEXT("NotLoggedIn"));
const FName USBZClientStateMachineStates::SubsystemInitialisation = FName(TEXT("SubsystemInitialisation"));
const FName USBZClientStateMachineStates::WaitFirstGameStart = FName(TEXT("WaitFirstGameStart"));
const FName USBZClientStateMachineStates::WaitPlayGo = FName(TEXT("WaitPlayGo"));
const FName USBZClientStateMachineStates::WaitSoloGame = FName(TEXT("WaitSoloGame"));
const FName USBZClientStateMachineStates::GameStart = FName(TEXT("GameStart"));
const FName USBZClientStateMachineStates::Matchmaking = FName(TEXT("Matchmaking"));
const FName USBZClientStateMachineStates::Lobby = FName(TEXT("Lobby"));
const FName USBZClientStateMachineStates::P2PHost = FName(TEXT("P2PHost"));
const FName USBZClientStateMachineStates::ABMatchmaking = FName(TEXT("ABMatchmaking"));
const FName USBZClientStateMachineStates::ABPreMatch = FName(TEXT("ABPreMatch"));
const FName USBZClientStateMachineStates::WaitingActionPhase = FName(TEXT("WaitingActionPhase"));
const FName USBZClientStateMachineStates::WaitingActionPhaseHost = FName(TEXT("WaitingActionPhaseHost"));
const FName USBZClientStateMachineStates::WaitingActionPhaseClient = FName(TEXT("WaitingActionPhaseClient"));
const FName USBZClientStateMachineStates::WaitingActionPhaseDropIn = FName(TEXT("WaitingActionPhaseDropIn"));
const FName USBZClientStateMachineStates::FunctionalTest = FName(TEXT("FunctionalTest"));
const FName USBZClientStateMachineStates::JobOverview = FName(TEXT("JobOverview"));
const FName USBZClientStateMachineStates::JobOverviewDropIn = FName(TEXT("JobOverviewDropIn"));
const FName USBZClientStateMachineStates::JobOverviewDirectJoin = FName(TEXT("JobOverviewDirectJoin"));
const FName USBZClientStateMachineStates::ActionPhase = FName(TEXT("ActionPhase"));
const FName USBZClientStateMachineStates::WaitMainMenu = FName(TEXT("WaitMainMenu"));
const FName USBZClientStateMachineStates::Result = FName(TEXT("Result"));
const FName USBZClientStateMachineStates::GameError = FName(TEXT("GameError"));
const FName USBZClientStateMachineStates::BackendError = FName(TEXT("BackendError"));
const FName USBZClientStateMachineStates::WaitingReturnToIIS = FName(TEXT("WaitingReturnToIIS"));
const FName USBZClientStateMachineStates::Outro = FName(TEXT("Outro"));
const FName USBZClientStateMachineStates::WaitingReplay = FName(TEXT("WaitingReplay"));
const FName USBZClientStateMachineStates::Replay = FName(TEXT("Replay"));
const FName USBZClientStateMachineStates::WaitingRestartLevel = FName(TEXT("WaitingRestartLevel"));

USBZClientStateMachineState::USBZClientStateMachineState() {
}

void USBZClientStateMachineState::OnNetworkStatusChanged(ESBZServiceStatus ServiceStatus) {
}

void USBZClientStateMachineState::OnEnter(USBZStateMachineData* InData) {
}


