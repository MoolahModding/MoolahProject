#include "TLMVoiceChatSubsystem.h"

UTLMVoiceChatSubsystem::UTLMVoiceChatSubsystem() {
}

void UTLMVoiceChatSubsystem::SetVoiceChatEnabled(const bool bEnabled) {
}

void UTLMVoiceChatSubsystem::SetPushToTalkEnabled(const bool bEnabled) {
}

void UTLMVoiceChatSubsystem::SetPlayerMuted(const FString& PlayerName, bool bMuted) {
}

void UTLMVoiceChatSubsystem::SetPlayerBlocked(const FString& EOSUserId, bool bBlocked) {
}

void UTLMVoiceChatSubsystem::SetAudioOutputVolume(float Volume) {
}

void UTLMVoiceChatSubsystem::SetAudioOutputMute(const bool bMute) {
}

void UTLMVoiceChatSubsystem::SetAudioInputVolume(float Volume) {
}

void UTLMVoiceChatSubsystem::SetAudioInputMute(const bool bMute) {
}

bool UTLMVoiceChatSubsystem::IsPlayerInChannel() {
    return false;
}

bool UTLMVoiceChatSubsystem::GetVoiceChatEnabled() const {
    return false;
}

bool UTLMVoiceChatSubsystem::GetPushToTalkEnabled() const {
    return false;
}

bool UTLMVoiceChatSubsystem::GetPlayersInChannel(TArray<FString>& PlayersInChannel) {
    return false;
}

bool UTLMVoiceChatSubsystem::GetPlayerMuted(const FString& PlayerName, bool& bIsMuted) {
    return false;
}

void UTLMVoiceChatSubsystem::GetPlayerIds(FString& PlatformUserId, FString& EOSUserId) const {
}

bool UTLMVoiceChatSubsystem::GetPlayerBlocked(const FString& EOSUserId) {
    return false;
}

float UTLMVoiceChatSubsystem::GetAudioOutputVolume() {
    return 0.0f;
}

bool UTLMVoiceChatSubsystem::GetAudioOutputMute() {
    return false;
}

float UTLMVoiceChatSubsystem::GetAudioInputVolume() {
    return 0.0f;
}

bool UTLMVoiceChatSubsystem::GetAudioInputMute() {
    return false;
}


