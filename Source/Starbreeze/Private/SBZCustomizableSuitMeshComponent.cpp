#include "SBZCustomizableSuitMeshComponent.h"

void USBZCustomizableSuitMeshComponent::SetSuitConfig(const FSBZSuitConfig& Config) {
}

void USBZCustomizableSuitMeshComponent::NativeOnSkeletalMeshLoaded() {
}

USBZCustomizableSuitMeshComponent::USBZCustomizableSuitMeshComponent() {
    this->BodyMeshComponent = NULL;
    this->SizeCategory = EPlayerCharacterSizeCategory::MaleAverage;
    this->CapsuleShadowingData = NULL;
}

