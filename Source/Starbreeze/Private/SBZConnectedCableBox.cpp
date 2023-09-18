#include "SBZConnectedCableBox.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZConnectedCableBox::ASBZConnectedCableBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowedChances = 0;
    this->CurrentSequenceIndex = 0;
    this->InteractionStates = 0;
    this->bIsDoorOpen = false;
    this->DoorInteractable = NULL;
    this->CurrentCorrectColorIndex = -1;
    this->bIsCompleted = false;
    this->FailCounter = 0;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZConnectedCableBox::SetCorrectColorSequence(const TArray<int32> CorrectSequence) {
}

void ASBZConnectedCableBox::SetCorrectColorIndex(const int32 InCorrectColorIndex) {
}

void ASBZConnectedCableBox::OnRep_InteractionStates() {
}

void ASBZConnectedCableBox::OnRep_FailCounter() {
}

void ASBZConnectedCableBox::OnRep_DoorOpen() {
}

void ASBZConnectedCableBox::OnRep_CurrentSequenceIndex() {
}

void ASBZConnectedCableBox::OnDoorInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZConnectedCableBox::OnCableInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZConnectedCableBox::EnableInteraction(bool bEnabled) {
}







void ASBZConnectedCableBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZConnectedCableBox, CurrentSequenceIndex);
    DOREPLIFETIME(ASBZConnectedCableBox, InteractionStates);
    DOREPLIFETIME(ASBZConnectedCableBox, bIsDoorOpen);
    DOREPLIFETIME(ASBZConnectedCableBox, bIsCompleted);
    DOREPLIFETIME(ASBZConnectedCableBox, FailCounter);
}


