#include "SBZInstantLoot.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

ASBZInstantLoot::ASBZInstantLoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->bIsDestroyOnLooted = false;
    this->OnLootedEvent = NULL;
    this->bIsLooted = false;
}

void ASBZInstantLoot::SetInteractionEnabled(bool bIsEnabled) {
}

void ASBZInstantLoot::OnRep_IsLooted(bool bOldIsLooted) {
}


void ASBZInstantLoot::HandlePredictedEnd(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZInstantLoot::HandleAckRejectedPredicted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZInstantLoot::HandleAckComplete(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZInstantLoot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZInstantLoot, bIsLooted);
}


