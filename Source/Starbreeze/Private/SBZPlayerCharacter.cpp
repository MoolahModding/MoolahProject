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

ASBZPlayerCharacter::ASBZPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZModularCharacterComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<USBZPlayerMovementComponent>(TEXT("CharMoveComp")).SetDefaultSubobjectClass<USBZPlayerInteractableComponent>(TEXT("SBZInteractableComponent"))) {
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->AutoPossessAI = EAutoPossessAI::Disabled;
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
    this->OverkillWeaponVODelay = 5.00f;
    this->OverkillWeaponVORate = 5.00f;
    this->FPCameraAttachment = CreateDefaultSubobject<USBZFirstPersonCameraAttachment>(TEXT("FirstPersonCameraAttachment"));
    this->RecoilComponent = CreateDefaultSubobject<USBZRecoilComponent>(TEXT("RecoilComponent"));
    this->AimAssistComponent = CreateDefaultSubobject<USBZAimAssistComponent>(TEXT("SBZAimAssistComponent"));
    this->CharacterComponent = CreateDefaultSubobject<USBZCharacterComponent>(TEXT("CharacterComponent"));
    this->Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PawnMesh1P"));
    this->Mesh1PBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PawnMesh1PBody"));
    this->Mesh1PSuit = CreateDefaultSubobject<USBZCustomizableSuitMeshComponent>(TEXT("PawnMesh1PSuit"));
    this->Mesh1PGloves = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PawnMesh1PGloves"));
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
    this->CarryAdditionalTiltDegrees = 0.00f;
    this->WhizzbyActorClass = NULL;
    this->WhizzbyActor = NULL;
    this->LandedFeedback = NULL;
    this->JumpedFeedback = NULL;
    this->ArmorDepletedFeedback = NULL;
    this->ArmorReplenishedFeedback = NULL;
    this->ArmorDamageFeedback = NULL;
    this->DodgeDepletedFeedback = NULL;
    this->DodgeReplenishedFeedback = NULL;
    this->DodgeDamageFeedback = NULL;
    this->HealthDamageFeedback = NULL;
    this->SubduedDamageFeedback = NULL;
    this->DefeatFeedback = NULL;
    this->SlideFeedback = NULL;
    this->HumanShieldReachSlotFeedBack = NULL;
    this->TraverseFeedback = NULL;
    this->RunFeedback = NULL;
    this->OverHealDamageFeedback = NULL;
    this->OverHealGainedFeedback = NULL;
    this->OverHealRestoredFeedback = NULL;
    this->ShieldFlashFeedback = NULL;
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
    this->EmoteData = NULL;
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
    this->FirstAidKitOverHealAmount = 0.50f;
    this->FallingStartHeight = 0.00f;
    this->bHasTriggeredCoupDeGraceSkill = false;
    this->MiniGameDetectionMultiplier = 1.00f;
    this->CuttingToolDetectionMultiplier = 0.50f;
    this->GadgetDetectionMultiplier = 0.25f;
    this->bIsGadgetPlacingIllegal = true;
    this->bIsCurrentNavLocationValid = false;
    this->NavLocationSaveInterval = 1.00f;
    this->NavigationZAxisLocationOffset = 20.00f;
    this->ModifiedToolDataArray.AddDefaulted(2);
    this->PrimaryTool = NULL;
    this->CuttingTool = NULL;
    this->CurrentReplicatedPlaceableTool = NULL;
    this->SlideFeedbackID = -1;
    this->RunFeedbackID = -1;
    this->TasedData = NULL;
    this->PlayerMicroCameraSocketName = TEXT("RightArm");
    this->MiniGameComponent = CreateDefaultSubobject<USBZMiniGameComponent>(TEXT("SBZMiniGameComponent"));
    this->CurrentMiniGameComponent = NULL;
    this->bIsLocalKillingHumanShield = false;
    this->HumanShieldStartTime = -1.00f;
    this->DefeatControlsReferenceID = -1;
    this->MinLandingSlideWalkToRunLerp = 0.40f;
    this->LastCuttableActor = NULL;
    this->LastHackedActor = NULL;
    this->ReflectorShieldMaxBlindedDuration = 4.00f;
    this->ReflectorShieldCooldownTime = 5.00f;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    this->FPCameraAttachment->SetupAttachment(RootComponent);
    this->Mesh1P->SetupAttachment(FPCameraAttachment);
    this->Mesh1PBody->SetupAttachment(Mesh1P);
    this->Mesh1PSuit->SetupAttachment(Mesh1P);
    this->Mesh1PGloves->SetupAttachment(Mesh1P);
}

void ASBZPlayerCharacter::StartEmote(const FText& EmoteText) {
}

bool ASBZPlayerCharacter::StartCurrentEquippableInspect() {
    return false;
}

bool ASBZPlayerCharacter::SetCameraFeedbackIntensity(int32 CameraFeedbackID, float Intensity) {
    return false;
}

void ASBZPlayerCharacter::ServerStartEquipOverkillWeapon_Implementation() {
}

void ASBZPlayerCharacter::Server_StopCurrentEmoteMontage_Implementation(float BlendOutTime) {
}

void ASBZPlayerCharacter::Server_SetPhoneInteractionFlow_Implementation(bool bInPhoneInteractionFlow) {
}

void ASBZPlayerCharacter::Server_PlayEmoteMontage_Implementation(const FGameplayTag& MontageTag) {
}

void ASBZPlayerCharacter::Server_OnMaskInputAbilityComplete_Implementation() {
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

void ASBZPlayerCharacter::OnPlayersInEscapeChanged(const FSBZPlayerInEscapeChangedEvent& PlayerInEscapeChangedEventData) {
}

void ASBZPlayerCharacter::OnOwnMiniGameStateChanged(EPD3MiniGameState OldState, EPD3MiniGameState NewState, bool bInIsLocallyControlled) {
}

void ASBZPlayerCharacter::OnDefeatTimerDone() {
}

void ASBZPlayerCharacter::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZPlayerCharacter::Multicast_StopCurrentEmoteMontage_Implementation(float BlendOutTime) {
}

void ASBZPlayerCharacter::Multicast_SetDefeatTime_Implementation(float InDefeatTime) {
}

void ASBZPlayerCharacter::Multicast_ReviveInteractionStarted_Implementation(float EndTime) {
}

void ASBZPlayerCharacter::Multicast_ResumeDefeatTime_Implementation(float InDefeatTime) {
}

void ASBZPlayerCharacter::Multicast_PlayRequestOverkillAnimation_Implementation() {
}

void ASBZPlayerCharacter::Multicast_PlayEmoteMontage_Implementation(const FGameplayTag& MontageTag) {
}

void ASBZPlayerCharacter::Multicast_PauseDefeatTime_Implementation() {
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

USBZMiniGameComponent* ASBZPlayerCharacter::GetCurrentMiniGameComponent() const {
    return NULL;
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

void ASBZPlayerCharacter::Client_PlayOverHealRestoredEffect_Implementation() {
}

void ASBZPlayerCharacter::Client_PlayOverHealGainedEffect_Implementation() {
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


