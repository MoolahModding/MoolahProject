#include "SBZLootProcessorBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZLootProcessorBase::ASBZLootProcessorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ProcessDuration = 30.00f;
    this->bCanQueueProcessing = true;
    this->MarkerAsset = NULL;
    this->PreplanningProcessDuration = 20.00f;
    this->ClaimBagInteractable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("ClaimBagInteractable"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->CurrentState = ESBZLootProcessorState::Inactive;
    this->BagCount = 0;
    this->CurrentProcessingIndex = -1;
    this->SabotagePoint = NULL;
    this->SabotageRestoreState = ESBZLootProcessorState::Inactive;
    this->BagTypeToReturn = NULL;
    this->MarkerID = -1;
    this->MarkerComponent = NULL;
    this->BoxComponent->SetupAttachment(RootComponent);
}

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

void ASBZLootProcessorBase::OnRep_CurrentProcessingIndex() {
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

void ASBZLootProcessorBase::Multicast_SetCurrentProcessingIndex_Implementation(uint8 Index) {
}

float ASBZLootProcessorBase::GetProcessDuration() const {
    return 0.0f;
}




void ASBZLootProcessorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLootProcessorBase, CurrentState);
    DOREPLIFETIME(ASBZLootProcessorBase, BagCount);
    DOREPLIFETIME(ASBZLootProcessorBase, CurrentProcessingIndex);
}


