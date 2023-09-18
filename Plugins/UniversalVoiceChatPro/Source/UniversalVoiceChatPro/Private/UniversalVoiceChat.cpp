#include "UniversalVoiceChat.h"

UUniversalVoiceChat::UUniversalVoiceChat() {
}

bool UUniversalVoiceChat::VoiceChatWasInitAudioVoiceChatQuality() {
    return false;
}

bool UUniversalVoiceChat::VoiceChatStopSpeak() {
    return false;
}

bool UUniversalVoiceChat::VoiceChatStartSpeak(bool _shouldHearMyOwnVoice, bool isGlobal, int32 radioChannel, bool useProximity, float maxProximityRange) {
    return false;
}

bool UUniversalVoiceChat::VoiceChatSetMicrophoneVolume(float volume) {
    return false;
}

bool UUniversalVoiceChat::VoiceChatRemoveChannel(int32 channelToRemove) {
    return false;
}

void UUniversalVoiceChat::VoiceChatLocalMuteSomeone(const UObject* WorldContextObject, APlayerState* playerToMute, bool shouldMute) {
}

bool UUniversalVoiceChat::VoiceChatLocalIsMutedSomeone(const UObject* WorldContextObject, APlayerState* playerToCheckMute) {
    return false;
}

bool UUniversalVoiceChat::VoiceChatInitAudioVoiceChatQuality(int32 _sampleRate, int32 _numChannels) {
    return false;
}

bool UUniversalVoiceChat::VoiceChatHasMicrophonePermission() {
    return false;
}

APlayerVoiceChatActor* UUniversalVoiceChat::VoiceChatGetMyLocalPlayerVoiceChat() {
    return NULL;
}

bool UUniversalVoiceChat::VoiceChatCheckRegisteredToChannel(int32 channelToCheck) {
    return false;
}

void UUniversalVoiceChat::VoiceChatAskMicrophonePermission() {
}

bool UUniversalVoiceChat::VoiceChatAddChannel(int32 channelToAdd) {
    return false;
}


