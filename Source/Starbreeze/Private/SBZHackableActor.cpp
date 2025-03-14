#include "SBZHackableActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"
#include "SBZOutlineComponent.h"
#include "SBZShoutTargetComponent.h"

ASBZHackableActor::ASBZHackableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->ShoutTarget = CreateDefaultSubobject<USBZShoutTargetComponent>(TEXT("SBZShoutTargetComponent"));
    this->InteractionMarker = NULL;
    this->FixMarker = NULL;
    this->HackingMarker = NULL;
    this->bStartActive = false;
    this->UnlockMode = ESBZHackableActorUnlockMode::HackUnlock;
    this->StealthDurationSeconds = 60.00f;
    this->LoudDurationSeconds = 60.00f;
    this->DurationSeconds = 0.00f;
    this->ItemUnlockGameplayInteractionQuery = NULL;
    this->bWillInterrupt = false;
    this->bIsResetToGenericScreen = false;
    this->bCanResetIfHackCompleted = false;
    this->bIsResetOnLoud = false;
    this->ResetToState = ESBZHackableActorState::Active;
    this->AdditionalDisplayTextIndex = 0;
    this->bIsOverwritingIndex = false;
    this->NumberOfCodesToView = 0;
    this->CodeEmailIndex = -1;
    this->LifeActionInstance->SetupAttachment(RootComponent);
    this->LifeActionSlot->SetupAttachment(LifeActionInstance);
    this->StaticMesh->SetupAttachment(RootComponent);
}


void ASBZHackableActor::UpdateDisplayTextImportantInformation(const int32 IndexToUpdate, const FText& InText) {
}

void ASBZHackableActor::SetUnlockMode(ESBZHackableActorUnlockMode InUnlockMode) {
}

void ASBZHackableActor::SetInteractionEnabled(bool bEnabled) {
}

void ASBZHackableActor::ResetHackableActor(ESBZHackableActorState ResetState) {
}

void ASBZHackableActor::OnRep_UnlockMode() {
}

void ASBZHackableActor::OnRep_ReplicatedData(const FSBZHackableActorReplicatedData& OldData) {
}

void ASBZHackableActor::OnInteractionStateChanged(const USBZBaseInteractableComponent* InInteractableComponent, bool bInNewState) {
}

void ASBZHackableActor::OnAckCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZHackableActor::Multicast_SetUnlockMode_Implementation(ESBZHackableActorUnlockMode InUnlockMode) {
}

void ASBZHackableActor::Multicast_SetState_Implementation(ESBZHackableActorState NewState) {
}

void ASBZHackableActor::Multicast_ResetHackableActor_Implementation(ESBZHackableActorState ResetState) {
}

void ASBZHackableActor::Multicast_AddDisplayText_Implementation() {
}

void ASBZHackableActor::InterruptHacking(ESBZHackableActorInterruptReason InReason) {
}

float ASBZHackableActor::GetDuration() const {
    return 0.0f;
}








void ASBZHackableActor::AddDisplayText() {
}

void ASBZHackableActor::ActivateHackableActor() {
}

void ASBZHackableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZHackableActor, UnlockMode);
    DOREPLIFETIME(ASBZHackableActor, ReplicatedData);
}


