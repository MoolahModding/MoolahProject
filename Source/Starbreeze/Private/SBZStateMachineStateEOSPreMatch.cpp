#include "SBZStateMachineStateEOSPreMatch.h"

USBZStateMachineStateEOSPreMatch::USBZStateMachineStateEOSPreMatch() {
    this->MatchmakingData = NULL;
    this->LoadingScreen = NULL;
}

void USBZStateMachineStateEOSPreMatch::OnPlayerReadyStatusUpdated(bool bIsReady) {
}

void USBZStateMachineStateEOSPreMatch::OnJoinVoiceSessionComplete(const FString& SessionName, bool bWasSuccessful) {
}

void USBZStateMachineStateEOSPreMatch::OnGetVoiceSessionStateComplete(const FString& SessionName, const ETLMVoiceSessionState VoiceSessionState) {
}

void USBZStateMachineStateEOSPreMatch::OnCreateVoiceSessionComplete(const FString& SessionName, const FString& SharedSessionName, bool bWasSuccessful) {
}

void USBZStateMachineStateEOSPreMatch::HandleReceivedPlayerReadyAck() {
}

void USBZStateMachineStateEOSPreMatch::HandleLobbyStateUpdated(ESBZOnlineCode Result) {
}

void USBZStateMachineStateEOSPreMatch::HandleInitializeTravel() {
}

void USBZStateMachineStateEOSPreMatch::HandleBeaconDisconnect() {
}

void USBZStateMachineStateEOSPreMatch::DelayedTravelToServer() {
}


