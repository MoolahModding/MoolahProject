#include "SBZMiniGameActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"
#include "SBZMiniGameComponent.h"
#include "SBZOutlineComponent.h"

ASBZMiniGameActor::ASBZMiniGameActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsUnlocked = false;
    this->bIsMiniGameIgnored = false;
    this->MiniGameComponent = CreateDefaultSubobject<USBZMiniGameComponent>(TEXT("SBZMiniGameComponent"));
    this->Interactable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMesh->SetupAttachment(RootComponent);
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    this->WidgetComponent->SetupAttachment(RootComponent);
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZMiniGameActor::SetMiniGameIgnored(bool bIgnored) {
}

void ASBZMiniGameActor::SetEnabled(bool bInEnabled) {
}

void ASBZMiniGameActor::OnRep_IsUnlocked() {
}

void ASBZMiniGameActor::OnMiniGameStateChanged(EPD3MiniGameState OldState, EPD3MiniGameState NewState, bool bInIsLocallyControlled) {
}

void ASBZMiniGameActor::OnInteractableStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState) {
}

void ASBZMiniGameActor::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZMiniGameActor::Multicast_SetMiniGameIgnored_Implementation(bool bIgnored) {
}

void ASBZMiniGameActor::Multicast_OnComplete_Implementation() {
}


void ASBZMiniGameActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZMiniGameActor, bIsUnlocked);
    DOREPLIFETIME(ASBZMiniGameActor, bIsMiniGameIgnored);
}


