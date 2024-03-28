#include "SBZLootProcessorBase.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

void ASBZLootProcessorBase::SetInteractionEnabled(bool bEnabled) {
}

void ASBZLootProcessorBase::ResumeProcessing() {
}

void ASBZLootProcessorBase::PauseProcessing() {
}

void ASBZLootProcessorBase::OnServerClaimBagInteractComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZLootProcessorBase::OnSabotagedStateChanged(bool bSabotaged) {
}

void ASBZLootProcessorBase::OnRep_CurrentState() {
}

void ASBZLootProcessorBase::OnRep_BagCount() {
}

void ASBZLootProcessorBase::OnInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState) {
}

void ASBZLootProcessorBase::OnBagBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZLootProcessorBase::Multicast_UpdateBagCount_Implementation(int32 NewBagCount) {
}

void ASBZLootProcessorBase::Multicast_SetState_Implementation(ESBZLootProcessorState NewState) {
}



void ASBZLootProcessorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLootProcessorBase, CurrentState);
    DOREPLIFETIME(ASBZLootProcessorBase, BagCount);
}

ASBZLootProcessorBase::ASBZLootProcessorBase() {
    this->ProcessDuration = 30.00f;
    this->MarkerAsset = NULL;
    this->ClaimBagInteractable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("ClaimBagInteractable"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->CurrentState = ESBZLootProcessorState::Inactive;
    this->BagCount = 0;
    this->SabotagePoint = NULL;
    this->bShouldSabotageGoToRunning = false;
    this->BagTypeToReturn = NULL;
    this->MarkerID = -1;
    this->MarkerComponent = NULL;
}

