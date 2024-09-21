#include "SBZStateMachineStateActionPhase.h"

USBZStateMachineStateActionPhase::USBZStateMachineStateActionPhase() {
    this->ActionPhaseWidget = NULL;
    this->ActionPhaseData = NULL;
    this->InitialLongTimeoutDelay = 0.00f;
}

void USBZStateMachineStateActionPhase::PlayerReadyReceived(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateActionPhase::PlayerDisconnectedAtBeacon(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateActionPhase::HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data) {
}

void USBZStateMachineStateActionPhase::HandlePlayerStateChanged(ASBZPlayerController* PlayerController, const FName& OldStateName, const FName& NewStateName) {
}

void USBZStateMachineStateActionPhase::HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data) {
}

void USBZStateMachineStateActionPhase::HandleMissionEnd(const int32 OutroVariation) {
}

void USBZStateMachineStateActionPhase::DropInLobbyClient(const FUniqueNetIdRepl& PlayerId, const FString& DisplayName) {
}

void USBZStateMachineStateActionPhase::BlackScreenDoneTimeout() {
}

void USBZStateMachineStateActionPhase::AutoReadyTimeout() {
}


