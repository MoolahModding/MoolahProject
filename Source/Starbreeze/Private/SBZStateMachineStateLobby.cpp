#include "SBZStateMachineStateLobby.h"

void USBZStateMachineStateLobby::WaitPlayersTickSeconds() {
}

void USBZStateMachineStateLobby::WaitGameTickSeconds() {
}

void USBZStateMachineStateLobby::TryUpdateWaitPlayersTimer() {
}

void USBZStateMachineStateLobby::StartWaitPlayersTimer() {
}

void USBZStateMachineStateLobby::StartWaitGameTimer() {
}

void USBZStateMachineStateLobby::StartWaitForServerPlayerReadyAck() {
}

void USBZStateMachineStateLobby::ResetWaitPlayersTimer() {
}

void USBZStateMachineStateLobby::ReceivedHostUpdate() {
}

void USBZStateMachineStateLobby::OnMissionEnd() {
}

void USBZStateMachineStateLobby::HandleWaitActionPhaseReceived() {
}

void USBZStateMachineStateLobby::HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode) {
}

void USBZStateMachineStateLobby::HandleLostConnectionToHost(ESBZOnlineCode ErrorCode) {
}

USBZStateMachineStateLobby::USBZStateMachineStateLobby() {
    this->PlayersWaitTimeout = 60;
    this->ActionPhasePlayersWaitTimeout = 30;
    this->GameStartTimeout = 5;
}

