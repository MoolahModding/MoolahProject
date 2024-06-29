#include "SBZTimedBagConverter.h"
#include "SBZInteractableComponent.h"

ASBZTimedBagConverter::ASBZTimedBagConverter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->AttachedBagGenerator = NULL;
    this->Duration = 10.00f;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
}

void ASBZTimedBagConverter::SetInteractionEnabled(bool bInEnabled) {
}

void ASBZTimedBagConverter::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractableComponent, USBZInteractorComponent* Interactor, bool bIsLocallyControlled) {
}

void ASBZTimedBagConverter::OnServerBagPickedUp() {
}

void ASBZTimedBagConverter::OnInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InInteractableComponent, bool bNewState) {
}

void ASBZTimedBagConverter::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}




