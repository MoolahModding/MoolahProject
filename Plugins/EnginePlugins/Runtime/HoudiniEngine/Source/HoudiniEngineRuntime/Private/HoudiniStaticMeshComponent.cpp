#include "HoudiniStaticMeshComponent.h"

UHoudiniStaticMeshComponent::UHoudiniStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = NULL;
    this->bHoudiniIconVisible = true;
}

void UHoudiniStaticMeshComponent::SetMesh(UHoudiniStaticMesh* InMesh) {
}

void UHoudiniStaticMeshComponent::SetHoudiniIconVisible(bool bInHoudiniIconVisible) {
}

void UHoudiniStaticMeshComponent::NotifyMeshUpdated() {
}

bool UHoudiniStaticMeshComponent::IsHoudiniIconVisible() const {
    return false;
}

UHoudiniStaticMesh* UHoudiniStaticMeshComponent::GetMesh() {
    return NULL;
}


