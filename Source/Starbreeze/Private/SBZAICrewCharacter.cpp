#include "SBZAICrewCharacter.h"
#include "Net/UnrealNetwork.h"
#include "SBZAICrewCharacterInteractableComponent.h"
#include "SBZActivateReplenishHealthEffect.h"
#include "SBZModularCharacterComponent.h"
#include "Components/CapsuleComponent.h"

ASBZAICrewCharacter::ASBZAICrewCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZAICrewCharacterInteractableComponent>(TEXT("SBZInteractableComponent")).SetDefaultSubobjectClass<USBZModularCharacterComponent>(TEXT("CharacterMesh0"))) {
    this->EquipmentData = NULL;
    this->HealthReplenishEffectClass = USBZActivateReplenishHealthEffect::StaticClass();
    this->CallComment = NULL;
    this->HelpComment = NULL;
    this->CPD00 = 0;
    this->CPD01 = 0;
    this->CrewState = NULL;
    this->DefeatState = EPD3DefeatState::None;
    this->OldDefeatState = EPD3DefeatState::None;
    this->DefeatTime = -1.00f;
    this->ReviveMarker = NULL;
    this->TasedMarker = NULL;
    this->CuffedMarker = NULL;
    this->SubduedMarker = NULL;
    this->DownedOutline = NULL;
    this->RevivedComment = NULL;
    this->UncuffedComment = NULL;
    this->DownedDialog = NULL;
    this->InCustodyDialog = NULL;
    this->BackFromCustodyDialog = NULL;
    this->CuffedDialog = NULL;
    this->TasedDialog = NULL;
    this->SubduedDialog = NULL;
    this->CurrentWard = NULL;
    this->bIsMaskOn = false;
    this->bIsLoadoutLoaded = false;
    this->MarkingVoicePriority = ESBZVoicePriority::MediumPriority;
    this->MarkingDuration = 5.00f;
    this->CrewAIMarkerAsset = NULL;
    FProperty* p_CapsuleComponent_Parent = GetClass()->FindPropertyByName("CapsuleComponent");
    FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent>(this)->SetupAttachment(*p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent*>(this));
}

void ASBZAICrewCharacter::OnServerStartInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICrewCharacter::OnServerEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICrewCharacter::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZAICrewCharacter::OnRep_DefeatTime() {
}

void ASBZAICrewCharacter::OnRep_CrewState(ASBZAICrewState* OldCrewState) {
}

void ASBZAICrewCharacter::Multicast_SetDefeatTime_Implementation(float InDefeatTime) {
}

void ASBZAICrewCharacter::Multicast_SetDefeatState_Implementation(EPD3DefeatState InState) {
}

void ASBZAICrewCharacter::Multicast_ResumeDefeatTime_Implementation(float InDefeatTime) {
}

void ASBZAICrewCharacter::Multicast_PauseDefeatTime_Implementation() {
}

void ASBZAICrewCharacter::Multicast_MarkTarget_Implementation(ASBZCharacter* Character, bool bShouldPlayPointGesture) {
}

void ASBZAICrewCharacter::Multicast_MarkCamera_Implementation(ASBZSecurityCamera* Camera) {
}

void ASBZAICrewCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAICrewCharacter, CrewState);
    DOREPLIFETIME(ASBZAICrewCharacter, DefeatTime);
}


