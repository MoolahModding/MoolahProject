#include "SBZInteractionActor.h"
#include "Components/SceneComponent.h"
#include "SBZInteractableComponent.h"

ASBZInteractionActor::ASBZInteractionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("Interaction"));
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZInteractionActor::HandleServerComplete(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZInteractionActor::HandleAckComplete(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


