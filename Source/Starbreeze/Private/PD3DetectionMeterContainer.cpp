#include "PD3DetectionMeterContainer.h"
#include "Components/SlateWrapperTypes.h"

UPD3DetectionMeterContainer::UPD3DetectionMeterContainer() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->DetectionMeterClass = NULL;
    this->Overlay_DetectionMeters = NULL;
    this->DetectedAudioEvent = NULL;
    this->DetectedAudioEventCooldown = 1.00f;
    this->TimeLastPlayedDetectedAudio = 0.00f;
    this->bIsBeingDetected = false;
}


void UPD3DetectionMeterContainer::OnObserved(bool bIsObserved) {
}

void UPD3DetectionMeterContainer::HandleHeistGoneLoud() {
}


