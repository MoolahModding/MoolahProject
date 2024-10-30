#include "SBZTool.h"
#include "Net/UnrealNetwork.h"
#include "SBZToolSkeletalMeshComponent.h"

ASBZTool::ASBZTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZToolSkeletalMeshComponent>(TEXT("MeshComponent"))) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bIsInventory = false;
    this->bReplicateRootAttachment = true;
    this->SkeletalMesh = (USBZToolSkeletalMeshComponent*)RootComponent;
    this->Data = NULL;
    this->ToolState = ESBZToolState::Canceled;
    this->InstigatorCharacter = NULL;
    this->OnReadyEvent = NULL;
    this->OnActivatedEvent = NULL;
    this->OnActivatedIdleEvent = NULL;
    this->OnActivatedUsingEvent = NULL;
    this->OnCanceledEvent = NULL;
    this->StopAllSoundsEvent = NULL;
    this->OnReadyEventRtpc = NULL;
    this->OnActivatedEventRtpc = NULL;
    this->OnActivatedIdleEventRtpc = NULL;
    this->OnActivatedUsingEventRtpc = NULL;
    this->OnCanceledRtpc = NULL;
    this->LockedPlayerController = NULL;
    this->ActivePlayerController = NULL;
    this->EquipPlayerController = NULL;
    this->ActiveUsingPlayerController = NULL;
    this->EquipPlayerFeedback = NULL;
    this->ActivePlayerFeedback = NULL;
    this->ActiveUsingPlayerFeedback = NULL;
}

void ASBZTool::StopAllSounds() {
}

void ASBZTool::Server_SetToolState_Implementation(ESBZToolState NewToolState) {
}

void ASBZTool::Server_SetEquippedAnimationFullyPlayed_Implementation(bool bInIsEquippedAnimationReady) {
}

void ASBZTool::Server_CallReady_Implementation() {
}


void ASBZTool::OnRep_ToolState(ESBZToolState OldToolState) {
}


void ASBZTool::OnInstigatorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}





void ASBZTool::Multicast_SetToolState_Implementation(ESBZToolState NewToolState) {
}

void ASBZTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZTool, ToolState);
}


