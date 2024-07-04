#include "SBZCustomizableSuitMeshComponent.h"

USBZCustomizableSuitMeshComponent::USBZCustomizableSuitMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyMeshComponent = NULL;
    this->SizeCategory = EPlayerCharacterSizeCategory::MaleAverage;
    this->CapsuleShadowingData = NULL;
}

void USBZCustomizableSuitMeshComponent::SetSuitConfig(const FSBZSuitConfig& Config) {
}

void USBZCustomizableSuitMeshComponent::NativeOnSkeletalMeshLoaded() {
}


