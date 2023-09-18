#include "SBZZiplineAudioController.h"

USBZZiplineAudioController::USBZZiplineAudioController() {
    this->ZiplineStartAudioEvent = NULL;
    this->ZiplineStopAudioEvent = NULL;
    this->ZiplineVelocityRtpc = NULL;
    this->CharacterPerspectiveRtpc = NULL;
    this->bZiplineActive = false;
    this->AudioComponent = NULL;
    this->ZiplineSoundMultiplicationValue = 0.01f;
}

void USBZZiplineAudioController::UpdateZiplineRtpc(float ZiplineVelocity) {
}

void USBZZiplineAudioController::StopZiplineAudio() {
}

void USBZZiplineAudioController::StartZiplineAudio() {
}

void USBZZiplineAudioController::SetZiplineRtpcPerspective(bool bLocalPlayer) {
}


