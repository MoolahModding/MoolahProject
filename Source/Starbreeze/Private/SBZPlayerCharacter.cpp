#include "SBZPlayerCharacter.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAimAssistComponent.h"
#include "SBZCharacterComponent.h"
#include "SBZCustomizableSuitMeshComponent.h"
#include "SBZFirstPersonCameraAttachment.h"
#include "SBZMiniGameComponent.h"
#include "SBZModularCharacterComponent.h"
#include "SBZPlayerInteractableComponent.h"
#include "SBZPlayerInteractorComponent.h"
#include "SBZPlayerMovementComponent.h"
#include "SBZRecoilComponent.h"
#include "SBZShoutoutComponent.h"
#include "Components/CapsuleComponent.h"

ASBZPlayerCharacter::ASBZPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZPlayerInteractableComponent>(TEXT("SBZInteractableComponent")).SetDefaultSubobjectClass<USBZModularCharacterComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<USBZPlayerMovementComponent>(TEXT("CharMoveComp"))) {
    this->VisualDetectionMultiplierSprinting = 1.00f;
    this->VisualDetectionMultiplierCrouched = 0.33f;
    this->VisualDetectionMultiplierStanding = 1.00f;
    this->AlertnessMultiplierSprinting = 1.00f;
    this->AlertnessMultiplierCrouched = 0.50f;
    this->AlertnessMultiplierStanding = 1.00f;
    this->ShoutoutComponent = CreateDefaultSubobject<USBZShoutoutComponent>(TEXT("Shoutout"));
    this->CallComment = NULL;
    this->HelpComment = NULL;
    this->DownedComment = NULL;
    this->GetDownComment = NULL;
    this->ShoutDownTime = 20.00f;
    this->ShoutDownRange = 3000.00f;
    this->IntimidationRange = 3000.00f;
    this->FPCameraAttachment = CreateDefaultSubobject<USBZFirstPersonCameraAttachment>(TEXT("FirstPersonCameraAttachment"));
    FProperty* p_CapsuleComponent_Parent = GetClass()->FindPropertyByName("CapsuleComponent");
    this->FPCameraAttachment->SetupAttachment(*p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent*>(this));
    this->RecoilComponent = CreateDefaultSubobject<USBZRecoilComponent>(TEXT("RecoilComponent"));
    this->AimAssistComponent = CreateDefaultSubobject<USBZAimAssistComponent>(TEXT("SBZAimAssistComponent"));
    this->CharacterComponent = CreateDefaultSubobject<USBZCharacterComponent>(TEXT("CharacterComponent"));
    this->Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PawnMesh1P"));
    this->Mesh1P->SetupAttachment(FPCameraAttachment);
    this->Mesh1PBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PawnMesh1PBody"));
    this->Mesh1PBody->SetupAttachment(Mesh1P);
    this->Mesh1PSuit = CreateDefaultSubobject<USBZCustomizableSuitMeshComponent>(TEXT("PawnMesh1PSuit"));
    this->Mesh1PSuit->SetupAttachment(Mesh1P);
    this->Mesh1PGloves = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PawnMesh1PGloves"));
    this->Mesh1PGloves->SetupAttachment(Mesh1P);
    this->Interactor = CreateDefaultSubobject<USBZPlayerInteractorComponent>(TEXT("Interactor"));
    this->DefaultAnimationCollectionFPP = NULL;
    this->AnimationCollectionFPP = NULL;
    this->CasingEyeHeight = 80.00f;
    this->SubduedEyeHeight = 15.00f;
    this->DownedEyeHeight = 15.00f;
    this->BleedoutEyeHeight = -10.00f;
    this->SlideEyeHeight = 5.50f;
    this->CarryTiltSpeed = 120.00f;
    this->CarryTiltDegrees = -4.00f;
    this->WhizzbyActorClass = NULL;
    this->WhizzbyActorClass = NULL;
    this->WhizzbyActor = NULL;
    this->LandedFeedback = NULL;
    this->LandedFeedback = NULL;
    this->JumpedFeedback = NULL;
    this->JumpedFeedback = NULL;
    this->ArmorDepletedFeedback = NULL;
    this->ArmorDepletedFeedback = NULL;
    this->ArmorReplenishedFeedback = NULL;
    this->ArmorReplenishedFeedback = NULL;
    this->ArmorDamageFeedback = NULL;
    this->ArmorDamageFeedback = NULL;
    this->DodgeDepletedFeedback = NULL;
    this->DodgeDepletedFeedback = NULL;
    this->DodgeReplenishedFeedback = NULL;
    this->DodgeReplenishedFeedback = NULL;
    this->DodgeDamageFeedback = NULL;
    this->DodgeDamageFeedback = NULL;
    this->HealthDamageFeedback = NULL;
    this->HealthDamageFeedback = NULL;
    this->SubduedDamageFeedback = NULL;
    this->SubduedDamageFeedback = NULL;
    this->DefeatFeedback = NULL;
    this->DefeatFeedback = NULL;
    this->SlideFeedback = NULL;
    this->SlideFeedback = NULL;
    this->HumanShieldReachSlotFeedBack = NULL;
    this->HumanShieldReachSlotFeedBack = NULL;
    this->TraverseFeedback = NULL;
    this->TraverseFeedback = NULL;
    this->RunFeedback = NULL;
    this->RunFeedback = NULL;
    this->RevivedComment = NULL;
    this->UncuffedComment = NULL;
    this->StealthMaskOnComment = NULL;
    this->LoudMaskOnComment = NULL;
    this->LowHealthComment = NULL;
    this->LowHealthLimit = 25.00f;
    this->DownedDialog = NULL;
    this->InCustodyDialog = NULL;
    this->BackFromCustodyDialog = NULL;
    this->CuffedDialog = NULL;
    this->TasedDialog = NULL;
    this->SubduedDialog = NULL;
    this->CurrentCarryNetID = 0;
    this->NormalTargetingHumanShieldMagnification = 1.00f;
    this->OnTopTargetingHumanShieldMagnification = 1.00f;
    this->EscortCircleEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->UnequippedWeaponData = NULL;
    this->FPZiplineMotorClass = NULL;
    this->FPZiplineMotorClass = NULL;
    this->PlayerAbilitySystem = NULL;
    this->OnTopBaseFOV = 55.00f;
    this->VisualDetectionData.AddDefaulted(4);
    this->DefeatState = EPD3DefeatState::None;
    this->OldDefeatState = EPD3DefeatState::None;
    this->DefeatTime = -1.00f;
    this->ReviveMarker = NULL;
    this->TasedMarker = NULL;
    this->CuffedMarker = NULL;
    this->SubduedMarker = NULL;
    this->ReviveInvulnerableDuration = 3.00f;
    this->PlayerMarkerAsset = NULL;
    this->DownedOutline = NULL;
    this->SBZPlayerState = NULL;
    this->OldSBZPlayerState = NULL;
    this->PlayerAttributeSet = NULL;
    this->TiltCameraModifier = NULL;
    this->PitchLookCameraModifier = NULL;
    this->HeightTransitionCameraModifier = NULL;
    this->FloorHeightCameraModifier = NULL;
    this->SubduedTiltSpeed = 40.00f;
    this->SubduedTiltDegrees = -20.00f;
    this->DownedTiltSpeed = 40.00f;
    this->DownedTiltDegrees = 20.00f;
    this->BleedOutTiltSpeed = 120.00f;
    this->BleedOutTiltDegrees = 65.00f;
    this->SubduedPitchLookSpeed = 12.00f;
    this->SubduedPitchDegrees = 35.00f;
    this->BleedOutPitchLookSpeed = 12.00f;
    this->BleedOutPitchDegrees = 35.00f;
    this->ReviveTiltSpeed = 200.00f;
    this->RequestOverkillWeaponAnimationTime = 1.50f;
    this->FallingStartHeight = 0.00f;
    this->bHasTriggeredCoupDeGraceSkill = false;
    this->CurrentFollower = NULL;
    this->MiniGameDetectionMultiplier = 1.00f;
    this->CuttingToolDetectionMultiplier = 0.50f;
    this->GadgetDetectionMultiplier = 0.25f;
    this->bIsGadgetPlacingIllegal = true;
    this->bIsCurrentNavLocationValid = false;
    this->NavLocationSaveInterval = 1.00f;
    this->ModifiedToolDataArray.AddDefaulted(2);
    this->PrimaryTool = NULL;
    this->CuttingTool = NULL;
    this->CurrentReplicatedPlaceableTool = NULL;
    this->SlideFeedbackID = -1;
    this->RunFeedbackID = -1;
    this->TasedData = NULL;
    this->PlayerMicroCameraSocketName = TEXT("RightArm");
    this->MiniGameComponent = CreateDefaultSubobject<USBZMiniGameComponent>(TEXT("SBZMiniGameComponent"));
    this->bIsLocalKillingHumanShield = false;
    this->HumanShieldStartTime = -1.00f;
    this->DefeatControlsReferenceID = -1;
    this->MinLandingSlideWalkToRunLerp = 0.40f;
    FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent>(this)->SetupAttachment(*p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent*>(this));
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}

bool ASBZPlayerCharacter::SetCameraFeedbackIntensity(int32 CameraFeedbackID, float Intensity) {
    return false;
}

void ASBZPlayerCharacter::ServerStartEquipOverkillWeapon_Implementation() {
}

void ASBZPlayerCharacter::Server_SetPhoneInteractionFlow_Implementation(bool bInPhoneInteractionFlow) {
}

void ASBZPlayerCharacter::Server_PickupAmmo_Implementation(uint32 ID, bool bIsSimulatedPickup) {
}

void ASBZPlayerCharacter::Server_OnMaskInputAbilityComplete_Implementation() {
}

void ASBZPlayerCharacter::Server_HackingSyncSucceeded_Implementation(UObject* InHackable) {
}

void ASBZPlayerCharacter::Server_HackingSyncStarted_Implementation(UObject* InHackable) {
}

void ASBZPlayerCharacter::Server_HackingSyncCompleted_Implementation(UObject* InHackable, bool bInSyncedOnEquipped) {
}

void ASBZPlayerCharacter::Server_HackingSyncAborted_Implementation(UObject* InHackable, bool bInIsSynchedAlready) {
}

bool ASBZPlayerCharacter::RemoveCameraFeedback(int32 RemoveID) {
    return false;
}

void ASBZPlayerCharacter::OnUpdateDefeatTime() {
}

void ASBZPlayerCharacter::OnUndoToolPlaceableAmmoChange(const int32 InPlaceableIndex) {
}

void ASBZPlayerCharacter::OnUndoToolAmmoChange(const int32 InPlaceableIndex, const int32 InCost) {
}

void ASBZPlayerCharacter::OnUndoThrowableAmmoChange(const int32 InThrowableIndex) {
}

void ASBZPlayerCharacter::OnUndoPlaceableAmmoChange(const int32 InPlaceableIndex) {
}

void ASBZPlayerCharacter::OnServerStartInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZPlayerCharacter::OnServerEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZPlayerCharacter::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZPlayerCharacter::OnRep_DefeatTime() {
}

void ASBZPlayerCharacter::OnPlayerStateDestroyed(AActor* DestroyedActor) {
}

void ASBZPlayerCharacter::OnOwnMiniGameStateChanged(EPD3MiniGameState OldState, EPD3MiniGameState NewState, bool bInIsLocallyControlled) {
}

void ASBZPlayerCharacter::OnDefeatTimerDone() {
}

void ASBZPlayerCharacter::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZPlayerCharacter::Multicast_SetDefeatTime_Implementation(float InDefeatTime) {
}

void ASBZPlayerCharacter::Multicast_ReviveInteractionStarted_Implementation(float EndTime) {
}

void ASBZPlayerCharacter::Multicast_ResumeDefeatTime_Implementation(float InDefeatTime) {
}

void ASBZPlayerCharacter::Multicast_PlayRequestOverkillAnimation_Implementation() {
}

void ASBZPlayerCharacter::Multicast_PauseDefeatTime_Implementation() {
}

void ASBZPlayerCharacter::Multicast_HackingSyncSucceeded_Implementation(UObject* InHackable) {
}

void ASBZPlayerCharacter::Multicast_HackingSyncStarted_Implementation(UObject* InHackable) {
}

void ASBZPlayerCharacter::Multicast_HackingSyncCompleted_Implementation(UObject* InHackable, bool bInSyncedOnEquipped) {
}

void ASBZPlayerCharacter::Multicast_HackingSyncAborted_Implementation(UObject* InHackable, bool bInIsSynchedAlready) {
}

void ASBZPlayerCharacter::Multicast_AbortPhoneInteraction_Implementation(bool bWasCompleted) {
}

bool ASBZPlayerCharacter::IsSeenByAI() const {
    return false;
}

bool ASBZPlayerCharacter::GetHealthAttributes(const UObject* WorldContextObject, float& Health, float& MaxHealth) {
    return false;
}

TArray<FSBZDetectionData> ASBZPlayerCharacter::GetDetectionData() const {
    return TArray<FSBZDetectionData>();
}

bool ASBZPlayerCharacter::GetArmorAttributes(const UObject* WorldContextObject, float& Armor, float& MaxArmor) {
    return false;
}

bool ASBZPlayerCharacter::FadeOutCameraFeedback(int32 RemoveID, bool bIsAutoRemoved) {
    return false;
}

void ASBZPlayerCharacter::Client_Teleport_Implementation(const FVector& Location, const float Yaw) {
}

void ASBZPlayerCharacter::Client_SetObserved_Implementation(bool bObserved) {
}

void ASBZPlayerCharacter::Client_SetEscortCircleAttachment_Implementation(AActor* EscortCircleHolder) {
}

void ASBZPlayerCharacter::Client_SetEscortCircleActive_Implementation(const bool bActive, AActor* EscortInstigator) {
}

void ASBZPlayerCharacter::Client_SetDetector_Implementation(uint8 Index, AActor* Detector) {
}

void ASBZPlayerCharacter::Client_SetDetectionData_Implementation(uint32 PackedData) {
}

void ASBZPlayerCharacter::Client_PickupAmmo_Implementation(uint32 ID) {
}

int32 ASBZPlayerCharacter::ApplyCameraFeedback(FSBZLocalPlayerFeedbackParameters& Parameters) {
    return 0;
}

void ASBZPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlayerCharacter, DesiredAcceleration);
    DOREPLIFETIME(ASBZPlayerCharacter, CurrentCarryNetID);
    DOREPLIFETIME(ASBZPlayerCharacter, DefeatTime);
}


