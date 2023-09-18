#include "SBZStaticInteractionBinaryState.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZStaticInteractionBinaryState::ASBZStaticInteractionBinaryState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->bState = false;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
}

void ASBZStaticInteractionBinaryState::SetInteractionEnabled(bool bEnabled) {
}

void ASBZStaticInteractionBinaryState::OnRep_CurrentState() {
}

void ASBZStaticInteractionBinaryState::OnAckCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}


void ASBZStaticInteractionBinaryState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZStaticInteractionBinaryState, bState);
}


