#include "SBZOutlineComponent.h"
#include "Net/UnrealNetwork.h"

USBZOutlineComponent::USBZOutlineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultAsset = NULL;
    this->InteractableFocusAsset = NULL;
    this->bIsHiddenManagedByInteractable = true;
    this->ActiveAsset = NULL;
    this->ActiveReplicated = NULL;
    this->bIsReplicatedHidden = false;
}

void USBZOutlineComponent::SetReplicatedHidden(bool bInIsReplicatedHidden) {
}

void USBZOutlineComponent::SetGloballyHideAllOutlines(const UObject* WorldContextObject, bool bVal) {
}

void USBZOutlineComponent::RemoveMesh(UMeshComponent* Mesh, bool bRemoveFromSelectorsIfUninitialized) {
}

void USBZOutlineComponent::OnRep_IsReplicatedHidden() {
}

void USBZOutlineComponent::OnRep_ActiveReplicated() {
}

void USBZOutlineComponent::Multicast_SetReplicatedHidden_Implementation(bool bInIsReplicatedHidden) {
}

void USBZOutlineComponent::Multicast_SetActiveReplicated_Implementation(USBZOutlineAsset* NewActiveReplicated) {
}

void USBZOutlineComponent::HandleInteractionFocusChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInFocus) {
}

void USBZOutlineComponent::HandleInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bEnabled) {
}

void USBZOutlineComponent::AddMesh(UMeshComponent* Mesh, bool bAddToSelectorsIfUninitialized) {
}

void USBZOutlineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZOutlineComponent, ActiveReplicated);
    DOREPLIFETIME(USBZOutlineComponent, bIsReplicatedHidden);
}


