#include "SBZCustomizableSuitMeshComponent.h"

USBZCustomizableSuitMeshComponent::USBZCustomizableSuitMeshComponent() {
    this->BodyMeshComponent = NULL;
    this->SizeCategory = EPlayerCharacterSizeCategory::MaleAverage;
    this->CapsuleShadowingData = NULL;
}

void USBZCustomizableSuitMeshComponent::SetSuitConfig(const FSBZSuitConfig& Config) {
}

void USBZCustomizableSuitMeshComponent::NativeOnSkeletalMeshLoaded() {
}


