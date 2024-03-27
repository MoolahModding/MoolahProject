#include "SBZWindEmitterComponent.h"

void USBZWindEmitterComponent::SetSpeed(float InWindSpeed) {
}

void USBZWindEmitterComponent::SetExtent(const FVector& InExtent) {
}

USBZWindEmitterComponent::USBZWindEmitterComponent() {
    this->VolumeType = ESBZWindVolumeType::Box;
    this->EmitterType = ESBZWindEmitterType::Directionnal;
    this->bHasInfiniteExtent = false;
    this->Speed = 0.00f;
    this->MinGustAmount = 0.00f;
    this->MaxGustAmount = 1.00f;
    this->GustFrequency = 1.00f;
    this->Strength = 1.00f;
}

