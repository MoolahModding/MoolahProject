#include "SBZSuitCustomizationComponent.h"

USBZSuitCustomizationComponent::USBZSuitCustomizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponent = NULL;
}

void USBZSuitCustomizationComponent::SetSuitConfig(const FSBZSuitConfig& Config) {
}

void USBZSuitCustomizationComponent::SetMeshComponent(USkeletalMeshComponent* InMeshCompoenent) {
}

void USBZSuitCustomizationComponent::NativeOnSkeletalMeshLoaded() {
}


