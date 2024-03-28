#include "SBZMusicManager.h"

void USBZMusicManager::StopMusic() {
}

void USBZMusicManager::SetVolume(float NewVolume) {
}

void USBZMusicManager::SetSwitch(FName SwitchGroup, FName SwitchState) {
}

void USBZMusicManager::SetRTPCValue(FName RTPC, float RTPCValue) {
}

void USBZMusicManager::SetMuted(bool bInMuted) {
}

void USBZMusicManager::PostEndMusicSequence(UAkAudioEvent* AudioStopEvent) {
}

void USBZMusicManager::PlayMusic(UAkAudioEvent* AudioEvent, bool bStopCurrent) {
}

bool USBZMusicManager::IsMuted() const {
    return false;
}

USBZMusicManager* USBZMusicManager::GetMusicManager(const UObject* WorldContextObject) {
    return NULL;
}

USBZMusicManager::USBZMusicManager() {
    this->VolumeRTPC = TEXT("global_music_volume");
    this->StopEvent = NULL;
    this->CurrentVolume = 100.00f;
    this->bIsMusicMainMenu = false;
}

