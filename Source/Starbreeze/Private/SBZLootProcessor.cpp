#include "SBZLootProcessor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZLootProcessor::ASBZLootProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProcessDuration = 30.00f;
    this->MarkerAsset = NULL;
    this->ClaimBagInteractable = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("ClaimBagInteractable"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent->SetupAttachment(RootComponent);
    this->CurrentState = ESBZLootProcessorState::Inactive;
    this->BagCount = 0;
    this->SabotagePoint = NULL;
    this->bShouldSabotageGoToRunning = false;
    this->BagTypeToReturn = NULL;
    this->MarkerID = -1;
    this->MarkerComponent = NULL;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZLootProcessor::SetInteractionEnabled(bool bEnabled) {
}

void ASBZLootProcessor::ResumeProcessing() {
}

void ASBZLootProcessor::PauseProcessing() {
}

void ASBZLootProcessor::OnTrayOpened() {
}

void ASBZLootProcessor::OnServerClaimBagInteractComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZLootProcessor::OnSabotagedStateChanged(bool bSabotaged) {
}

void ASBZLootProcessor::OnRep_CurrentState() {
}

void ASBZLootProcessor::OnRep_BagCount() {
}

void ASBZLootProcessor::OnInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState) {
}

void ASBZLootProcessor::OnBagBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZLootProcessor::Multicast_UpdateBagCount_Implementation(int32 NewBagCount) {
}

void ASBZLootProcessor::Multicast_SetState_Implementation(ESBZLootProcessorState NewState) {
}



void ASBZLootProcessor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLootProcessor, CurrentState);
    DOREPLIFETIME(ASBZLootProcessor, BagCount);
}


