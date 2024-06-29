#include "SBZMultiBagGenerator.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

ASBZMultiBagGenerator::ASBZMultiBagGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->BagType = NULL;
    this->NumberOfBags = 2;
    this->bDestroyOnLastBag = false;
}

void ASBZMultiBagGenerator::SetEnabled(bool bIsEnabled) {
}

void ASBZMultiBagGenerator::OnServerCompleteInteraction(USBZBaseInteractableComponent* Comp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


