#include "PD3DetectionMeterContainer.h"


void UPD3DetectionMeterContainer::OnObserved(bool bIsObserved) {
}

void UPD3DetectionMeterContainer::HandleHeistGoneLoud() {
}

UPD3DetectionMeterContainer::UPD3DetectionMeterContainer() {
    this->DetectionMeterClass = NULL;
    this->Overlay_DetectionMeters = NULL;
    this->DetectedAudioEvent = NULL;
    this->DetectedAudioEventCooldown = 1.00f;
    this->TimeLastPlayedDetectedAudio = 0.00f;
    this->bIsBeingDetected = false;
}

