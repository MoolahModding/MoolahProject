#include "SBZPocketDrill.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZPocketDrill::ASBZPocketDrill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisassembleMarkerAsset = NULL;
    this->bPauseProgressWhileAdjustingIsNeeded = false;
    this->NumberOfNeededAdjusts = 3;
    this->SliceOffset = 5.00f;
    this->AdjustTimeSeconds = 5.00f;
    this->bStartActive = true;
    this->UnjamInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("UnjamInteraction"));
    this->AdjustInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("AdjustInteraction"));
    this->ActivationInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("ActivationInteraction"));
    this->AlarmNotificationAsset = NULL;
    this->MotorEndingXPosition = 0.00f;
    this->MotorStartingXPosition = 0.00f;
    this->AdjustsReached = 0;
    this->DrillMesh = NULL;
    this->bIsEnabled = false;
    this->ProgressPerSecond = 0.00f;
    this->Tags.AddDefaulted(1);
}

void ASBZPocketDrill::SetActive(bool bIsActive) {
}

void ASBZPocketDrill::OnUnjamInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZPocketDrill::OnRep_IsEnabled(bool bOldValue) {
}

void ASBZPocketDrill::OnAdjustInteractionStarted(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZPocketDrill::OnAdjustInteractionAborted(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZPocketDrill::OnAdjustInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZPocketDrill::OnActivationComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZPocketDrill::Multicast_SetEnabled_Implementation(bool bInIsEnabled) {
}

void ASBZPocketDrill::Multicast_ReduceDuration_Implementation() {
}

void ASBZPocketDrill::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPocketDrill, bIsEnabled);
}


