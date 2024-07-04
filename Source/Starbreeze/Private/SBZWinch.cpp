#include "SBZWinch.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZWinch::ASBZWinch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->StartInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("StartInteraction"));
    this->GrabInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("GrabInteraction"));
    this->AttachInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("AttachInteraction"));
    this->bIsInterruptedExternally = false;
    this->bEnableSabotagePointsOnNeedsAdjusting = false;
    this->Seed = -1;
    this->CurrentWinchState = ESBZWinchState::None;
    this->bHasBeenInterrupted = false;
    this->bIsExternallySabotaged = false;
}

void ASBZWinch::SetWinchEnabled(bool bEnabled) {
}

void ASBZWinch::OnWinchSabotaged(bool bIsSabotaged) {
}

void ASBZWinch::OnRep_WinchState() {
}

void ASBZWinch::OnAckHookInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZWinch::OnAckHookAttachInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZWinch::OnAckActivationInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZWinch::Multicast_SetWinchState_Implementation(ESBZWinchState NewState) {
}


void ASBZWinch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZWinch, CurrentWinchState);
}


