#include "SBZItemContainer.h"
#include "SBZInteractableComponent.h"

ASBZItemContainer::ASBZItemContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->HiddenItem = NULL;
    this->OtherContainer = NULL;
    this->bHasItem = false;
    this->bIsBeforeOtherContainer = false;
}

void ASBZItemContainer::SetInteractionEnabled(bool bEnabled) {
}

void ASBZItemContainer::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


