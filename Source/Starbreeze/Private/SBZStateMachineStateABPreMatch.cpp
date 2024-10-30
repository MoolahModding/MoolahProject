#include "SBZStateMachineStateABPreMatch.h"

USBZStateMachineStateABPreMatch::USBZStateMachineStateABPreMatch() {
    this->MatchmakingData = NULL;
}

void USBZStateMachineStateABPreMatch::OnPlayerReadyStatusUpdated(bool bIsReady) {
}

void USBZStateMachineStateABPreMatch::OnJoinVoiceSessionComplete(const FString& SessionName, bool bWasSuccessful) {
}

void USBZStateMachineStateABPreMatch::OnGetVoiceSessionStateComplete(const FString& SessionName, const ETLMVoiceSessionState VoiceSessionState) {
}

void USBZStateMachineStateABPreMatch::OnCreateVoiceSessionComplete(const FString& SessionName, const FString& SharedSessionName, bool bWasSuccessful) {
}

void USBZStateMachineStateABPreMatch::HandleReceivedPlayerReadyAck() {
}

void USBZStateMachineStateABPreMatch::HandleLobbyStateUpdated(ESBZOnlineCode Result) {
}

void USBZStateMachineStateABPreMatch::HandleInitializeTravel() {
}

void USBZStateMachineStateABPreMatch::HandleBeaconDisconnect() {
}

void USBZStateMachineStateABPreMatch::DelayedTravelToServer() {
}


