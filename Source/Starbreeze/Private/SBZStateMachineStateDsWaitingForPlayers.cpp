#include "SBZStateMachineStateDsWaitingForPlayers.h"

void USBZStateMachineStateDsWaitingForPlayers::UnregisterClient(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateDsWaitingForPlayers::PlayerWaitForReady(const FUniqueNetIdRepl& WaitForReadyPlayerId) {
}

void USBZStateMachineStateDsWaitingForPlayers::PlayerStartTravel(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateDsWaitingForPlayers::PlayerReadyReceived(const FUniqueNetIdRepl& ReadyPlayerId) {
}

void USBZStateMachineStateDsWaitingForPlayers::PlayerDisconnectedAtBeacon(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateDsWaitingForPlayers::OnPlayersReadyTimerComplete() {
}

void USBZStateMachineStateDsWaitingForPlayers::IntroSequenceTimeout() {
}

void USBZStateMachineStateDsWaitingForPlayers::HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data) {
}

void USBZStateMachineStateDsWaitingForPlayers::HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data) {
}

void USBZStateMachineStateDsWaitingForPlayers::EndIntroSequence() {
}

void USBZStateMachineStateDsWaitingForPlayers::DropInLobbyClient(const FUniqueNetIdRepl& PlayerId, const FString& DisplayName) {
}

void USBZStateMachineStateDsWaitingForPlayers::CleanState() {
}

void USBZStateMachineStateDsWaitingForPlayers::BlackScreenDoneTimeout() {
}

void USBZStateMachineStateDsWaitingForPlayers::AutoReadyTimeout() {
}

USBZStateMachineStateDsWaitingForPlayers::USBZStateMachineStateDsWaitingForPlayers() {
    this->PlayersReadyTimeoutValue = 60.00f;
}

