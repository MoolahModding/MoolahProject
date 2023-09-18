#include "MicrophoneSpeakComponent.h"

UMicrophoneSpeakComponent::UMicrophoneSpeakComponent() {
    this->VoiceCaptureAudioComponent = NULL;
    this->VoiceCaptureSoundWaveProcedural = NULL;
    this->bAutoActivate = true;
}

bool UMicrophoneSpeakComponent::startSpeaking(bool _shouldHearMyOwnVoice, bool isGlobal, int32 radioChannel, bool useRange, float maxRange) {
    return false;
}

void UMicrophoneSpeakComponent::SetVoiceVolume(float volume) {
}

void UMicrophoneSpeakComponent::setAttenuationAssetPath(bool enableAttenuation, const FString& _pathToAttenuationAsset) {
}

void UMicrophoneSpeakComponent::RPCServerBroadcastVoiceData_Implementation(const TArray<uint8>& data, int32 sampleRate, int32 numchannels, int32 PCMSize) {
}

void UMicrophoneSpeakComponent::RPCReceiveVoiceFromServer_Implementation(UMicrophoneSpeakComponent* compToOutputVoice, const TArray<uint8>& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize) {
}

void UMicrophoneSpeakComponent::RPCClientTransmitVoiceData_Implementation(const TArray<uint8>& data, int32 sampleRate, int32 numchannels, int32 PCMSize, bool _isGlobal, int32 _radioChannel, bool _useRange, float _maxRange) {
}

void UMicrophoneSpeakComponent::payloadReceivedVoiceData(const TArray<uint8>& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize) {
}

void UMicrophoneSpeakComponent::muteAudio(bool _isMuted) {
}

bool UMicrophoneSpeakComponent::isPlayingAudioVoice() {
    return false;
}

bool UMicrophoneSpeakComponent::initAudioResources(int32 voiceSampleRate, int32 _voiceNumChannels) {
    return false;
}

void UMicrophoneSpeakComponent::endSpeaking() {
}


