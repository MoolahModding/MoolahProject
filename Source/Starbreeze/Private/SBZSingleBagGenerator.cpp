#include "SBZSingleBagGenerator.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

ASBZSingleBagGenerator::ASBZSingleBagGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->BagType = NULL;
    this->SecondaryBagType = NULL;
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("Interactable"));
    this->Outline = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->bIsSecondaryTypeUsed = false;
}

void ASBZSingleBagGenerator::SetInteractionEnabled(bool bEnabled) {
}

void ASBZSingleBagGenerator::SetEnabled(bool bEnabled) {
}

void ASBZSingleBagGenerator::OnRep_ShouldUseSecondaryType() {
}

void ASBZSingleBagGenerator::Multicast_ChangeToSecondaryType_Implementation() {
}

void ASBZSingleBagGenerator::HandleInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bEnabled) {
}

void ASBZSingleBagGenerator::HandleInteraction(USBZBaseInteractableComponent* Comp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZSingleBagGenerator::ChangeToSecondaryType() {
}


void ASBZSingleBagGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZSingleBagGenerator, bIsSecondaryTypeUsed);
}


