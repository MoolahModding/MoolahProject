#include "SBZStateMachineStateJobOverview.h"

void USBZStateMachineStateJobOverview::WaitForRandomizedRooms() {
}

void USBZStateMachineStateJobOverview::UnregisterClient(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateJobOverview::StartIntroSequence() {
}

void USBZStateMachineStateJobOverview::ReadyPlayer(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateJobOverview::RandomizedRoomLoadingComplete(ASBZLevelScriptActor* SubLevel) {
}

void USBZStateMachineStateJobOverview::PlayerWaitForReady(const FUniqueNetIdRepl& WaitForReadyPlayerId) {
}

void USBZStateMachineStateJobOverview::PlayerStartTravel(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateJobOverview::PlayerReadyReceived(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateJobOverview::PlayerDisconnectedAtBeacon(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateJobOverview::OnPlayerBeginPlayState(ASBZPlayerController* PlayerController) {
}

void USBZStateMachineStateJobOverview::OnAllPlayersReady(EBlackScreenTransitionType BlackScreenTransitionType) {
}

void USBZStateMachineStateJobOverview::NetworkDisconnected() {
}

void USBZStateMachineStateJobOverview::MoveToActionPhase() {
}

void USBZStateMachineStateJobOverview::IntroSequenceTimedOut() {
}

void USBZStateMachineStateJobOverview::HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data) {
}

void USBZStateMachineStateJobOverview::HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data) {
}

void USBZStateMachineStateJobOverview::EndIntroSequence() {
}

void USBZStateMachineStateJobOverview::EnableReadyButton() {
}

void USBZStateMachineStateJobOverview::DropInLobbyClient(const FUniqueNetIdRepl& PlayerIdm, const FString& DisplayName) {
}

void USBZStateMachineStateJobOverview::ClientDisconnected(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateJobOverview::AutoReadyTimeout() {
}

USBZStateMachineStateJobOverview::USBZStateMachineStateJobOverview() {
    this->JobOverviewWidget = NULL;
}

