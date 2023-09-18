#include "SBZModularCharacterComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SBZCustomizableSuitMeshComponent.h"

USBZModularCharacterComponent::USBZModularCharacterComponent() {
    this->SuitCapsuleShadowingData = NULL;
    this->SuitMeshComponent = CreateDefaultSubobject<USBZCustomizableSuitMeshComponent>(TEXT("SuitSkeletalMesh"));
    this->GlovesMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GlovesSkeletalMesh"));
    this->BodyMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodySkeletalMesh"));
}

void USBZModularCharacterComponent::SetSuitMesh(USkeletalMesh* SuitSkeletalMesh) {
}

void USBZModularCharacterComponent::SetGlovesMesh(USkeletalMesh* GlovesSkeletalMesh) {
}

void USBZModularCharacterComponent::SetBodyMesh(USkeletalMesh* BodySkeletalMesh) {
}

USBZCustomizableSuitMeshComponent* USBZModularCharacterComponent::GetSuitMeshComponent() const {
    return NULL;
}

USkeletalMeshComponent* USBZModularCharacterComponent::GetGlovesMeshComponent() const {
    return NULL;
}

USkeletalMeshComponent* USBZModularCharacterComponent::GetBodyMeshComponent() const {
    return NULL;
}

void USBZModularCharacterComponent::AddToOutline(USBZOutlineComponent* OutlineComponent) {
}


