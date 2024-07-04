#include "SBZStateMachineStateDsActionPhase.h"

USBZStateMachineStateDsActionPhase::USBZStateMachineStateDsActionPhase() {
    this->ActionPhaseData = NULL;
    this->InitialLongTimeoutDelay = 0.00f;
}

void USBZStateMachineStateDsActionPhase::PlayerWaitForReady(const FUniqueNetIdRepl& WaitForReadyPlayerId) {
}

void USBZStateMachineStateDsActionPhase::PlayerStartTravel(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateDsActionPhase::PlayerReadyReceived(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateDsActionPhase::PlayerDisconnectedAtBeacon(const FUniqueNetIdRepl& PlayerId) {
}

void USBZStateMachineStateDsActionPhase::HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& Data) {
}

void USBZStateMachineStateDsActionPhase::HandlePlayerStateAdded(const FSBZPlayerStateAddedEvent& Data) {
}

void USBZStateMachineStateDsActionPhase::HandleMissionResultReady(const FSBZEndMissionResultData& MissionResultData) {
}

void USBZStateMachineStateDsActionPhase::HandleMissionEnd(const int32 OutroVariation) {
}

void USBZStateMachineStateDsActionPhase::DropInLobbyClient(const FUniqueNetIdRepl& PlayerId, const FString& DisplayName) {
}

void USBZStateMachineStateDsActionPhase::AutoReadyTimeout() {
}


