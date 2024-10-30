#include "SBZCharacter.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZApplyMarkedTagEffect.h"
#include "SBZCharacterFootStepComponent.h"
#include "SBZCharacterInteractableComponent.h"
#include "SBZCharacterMantlingComponent.h"
#include "SBZCharacterSlidingComponent.h"
#include "SBZCharacterVaultingComponent.h"
#include "SBZCharacterVoiceComponent.h"
#include "SBZDamageTracker.h"
#include "SBZMeleeComponent.h"
#include "SBZOutlineComponent.h"
#include "SBZSkeletalMeshComponentBudgeted.h"
#include "SBZZiplineAudioController.h"

ASBZCharacter::ASBZCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZSkeletalMeshComponentBudgeted>(TEXT("CharacterMesh0"))) {
    this->MarkedVoiceComment = NULL;
    this->MarkedOutline = NULL;
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->CarryType = NULL;
    this->HumanShieldCarryType = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ZiplineAudioController = CreateDefaultSubobject<USBZZiplineAudioController>(TEXT("SBZZiplineAudioController"));
    this->ZiplineMotorClass = NULL;
    this->CurrentZiplineMotor = NULL;
    this->ZiplineAttachmentBone = TEXT("Hips");
    this->bRandomMeshScaleEnabled = false;
    this->EventReactionComponent = NULL;
    this->MaxCarryBagCount = 1;
    this->bIsAlive = true;
    this->bIsRagdolled = false;
    this->bIsDeathAllowed = true;
    this->bIsLocallyControlled = false;
    this->bIsRunning = false;
    this->bIsJumping = false;
    this->bIsTargeting = false;
    this->bIsPlayReady = false;
    this->bIsCarried = false;
    this->bIsCarriedPredicted = false;
    this->bIsCarriedDropAnimation = false;
    this->bIsDropAndCarryScope = false;
    this->bIsCarryChangedUsingInteraction = true;
    this->StartReloadState = ESBZReloadState::None;
    this->bIsCurrentAnimationMagazineRemoved = false;
    this->LastLocalReloadMontage = NULL;
    this->LastRecoilMontage = NULL;
    this->MovementSettings = NULL;
    this->Stance = ESBZCharacterStance::First;
    this->CompatibleStances = 0;
    this->MaxStartAimOffsetYawDegrees = 67.50f;
    this->MaxAimOffsetYawDegrees = 74.00f;
    this->MaxStartAimOffsetYawDegreesTargeting = 35.00f;
    this->MaxAimOffsetYawDegreesTargeting = 74.00f;
    this->RemoteViewYaw = 0;
    this->AbilitySystem = NULL;
    this->CurrentEquippableIndex = -1;
    this->LastEquippableIndex = -1;
    this->LastRequiredEquippableIndex = -1;
    this->CurrentEquippable = NULL;
    this->EquipState = ESBZEquipState::Unequipped;
    this->EquipStateAndIndex = 0;
    this->EquippableAttachementSocketName = TEXT("RootWeapon");
    this->LinkedAnimationClass = NULL;
    this->AnimationCollection = NULL;
    this->FacialAnimationCollection = NULL;
    this->EmotionMapping = NULL;
    this->AnimationData = NULL;
    this->DefaultLifeActionAffinityData = NULL;
    this->RandomizedMeshScaleLifeActionAffinityData = NULL;
    this->bCanEverHaveFacialAnimation = true;
    this->TargetEquippableIndex = -1;
    this->InitialEquippableIndex = 0;
    this->ForbiddenEquippableIndexCountArray[0] = 0;
    this->ForbiddenEquippableIndexCountArray[1] = 0;
    this->ForbiddenEquippableIndexCountArray[2] = 0;
    this->ForbiddenEquippableIndexCountArray[3] = 0;
    this->ForbiddenEquippableIndexCountArray[4] = 0;
    this->ForbiddenEquippableIndexCountArray[5] = 0;
    this->ForbiddenEquippableIndexCountArray[6] = 0;
    this->EquippableVisibleCount = -1;
    this->EquippedCount = 0;
    this->bIsInitialEquipped = false;
    this->VoiceComponent = CreateDefaultSubobject<USBZCharacterVoiceComponent>(TEXT("SBZCharacterVoiceComponent"));
    this->DamageTracker = CreateDefaultSubobject<USBZDamageTracker>(TEXT("SBZDamageTracker"));
    this->FootStepComponent = CreateDefaultSubobject<USBZCharacterFootStepComponent>(TEXT("SBZCharacterFootStepComponent"));
    this->SlidingComponent = CreateDefaultSubobject<USBZCharacterSlidingComponent>(TEXT("SBZCharacterSlidingComponent"));
    this->MantlingComponent = CreateDefaultSubobject<USBZCharacterMantlingComponent>(TEXT("SBZCharacterMantlingComponent"));
    this->VaultingComponent = CreateDefaultSubobject<USBZCharacterVaultingComponent>(TEXT("SBZCharacterVaultingComponent"));
    this->AIVisibilityNodeComputationFrequency = ESBZAIVisibilityNodeComputationFrequency::Automatic;
    this->AbilityData = NULL;
    this->TagReactionAsset = NULL;
    this->CurrentTagReactionAsset = NULL;
    this->LastTagReactionMontage = NULL;
    this->HurtReactionArray[0] = NULL;
    this->HurtReactionArray[1] = NULL;
    this->HurtReactionArray[2] = NULL;
    this->HurtReactionArray[3] = NULL;
    this->HurtReactionArray[4] = NULL;
    this->HurtReactionArray[5] = NULL;
    this->HurtReactionArray[6] = NULL;
    this->HurtReactionArray[7] = NULL;
    this->HurtReactionArray[8] = NULL;
    this->HurtReactionArray[9] = NULL;
    this->HurtReactionArray[10] = NULL;
    this->HurtReactionArray[11] = NULL;
    this->HurtReactionArray[12] = NULL;
    this->HurtReactionArray[13] = NULL;
    this->HurtReactionArray[14] = NULL;
    this->HurtReactionArray[15] = NULL;
    this->HurtReactionArray[16] = NULL;
    this->HurtReactionArray[17] = NULL;
    this->HurtReactionArray[18] = NULL;
    this->HurtReactionArray[19] = NULL;
    this->HurtReactionArray[20] = NULL;
    this->HurtReactionArray[21] = NULL;
    this->HurtReactionArray[22] = NULL;
    this->HurtReactionArray[23] = NULL;
    this->LandSoundEvent = NULL;
    this->MinInteractionDurationToUnequip = 1.20f;
    this->CurrentThrowableIndex = -1;
    this->CurrentPlaceableIndex = -1;
    this->Interactable = CreateDefaultSubobject<USBZCharacterInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->MeleeComponent = CreateDefaultSubobject<USBZMeleeComponent>(TEXT("SBZMeleeComponent"));
    this->MeleeDamageData = NULL;
    this->CurrentCarryActor = NULL;
    this->CurrentCarryInstigator = NULL;
    this->CarryActorSocketName = TEXT("Spine");
    this->PhysicsAssetWhenCarried = NULL;
    this->PhysicsAssetWhenNotCarried = NULL;
    this->AnimClassWhenCarriedDead = NULL;
    this->HumanShieldInstigatorState = ESBZHumanShieldInstigatorState::None;
    this->HumanShieldInstigatorAcceptableRadius = 5.00f;
    this->MeleeComment = NULL;
    this->CurrentHumanShieldInstigatorEnterMontage = NULL;
    this->CarryingFromCrouchAcceptableRadius = 2.00f;
    this->Seed = -1;
    this->LastController = NULL;
    this->DialogBodyGesturesData = NULL;
    this->ForcedFacialAnimaton = NULL;
    this->EquippedMask = NULL;
    this->DisplayIcon = NULL;
    this->MarkedGameplayEffectClass = USBZApplyMarkedTagEffect::StaticClass();
    this->HurtReactionOffset[0] = 0;
    this->HurtReactionOffset[1] = 0;
    this->HurtReactionOffset[2] = 0;
    this->HurtReactionOffset[3] = 0;
    this->HurtReactionOffset[4] = 0;
    this->HurtReactionOffset[5] = 0;
    this->HurtReactionOffset[6] = 0;
    this->HurtReactionOffset[7] = 0;
    this->HurtReactionOffset[8] = 0;
    this->HurtReactionOffset[9] = 0;
    this->HurtReactionOffset[10] = 0;
    this->HurtReactionOffset[11] = 0;
    this->HurtReactionOffset[12] = 0;
    this->HurtReactionOffset[13] = 0;
    this->HurtReactionOffset[14] = 0;
    this->HurtReactionOffset[15] = 0;
    this->HurtReactionOffset[16] = 0;
    this->HurtReactionOffset[17] = 0;
    this->HurtReactionOffset[18] = 0;
    this->HurtReactionOffset[19] = 0;
    this->HurtReactionOffset[20] = 0;
    this->HurtReactionOffset[21] = 0;
    this->HurtReactionOffset[22] = 0;
    this->HurtReactionOffset[23] = 0;
    this->LastAppliedHurtReactionIndex = -1;
    this->CurrentHurtReactionType = ESBZHurtReactionType::MAX;
    this->HurtReactionEndTime = -1.00f;
    this->PredictedHurtReactionEndTime = -1.00f;
    this->CurrentMeleeMontage = NULL;
    this->LastKnownRoom = NULL;
    this->ExplosionLineTraceBoneArray.AddDefaulted(6);
    this->HeadBone = TEXT("Head");
    this->CarryWeightTierOffset = 1.00f;
    this->CurrentlyUsedThrowable = NULL;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
}

void ASBZCharacter::SetStance(ESBZCharacterStance InStance) {
}

void ASBZCharacter::Server_TransferBagFrom_Implementation(ASBZCharacter* ToCharacter) {
}

void ASBZCharacter::Server_ThrowBag_Implementation(const FVector& ReplicatedVelocity) {
}

void ASBZCharacter::Server_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex) {
}

void ASBZCharacter::Server_OnThrowCarryActorFailed_Implementation(uint32 NetID) {
}

void ASBZCharacter::Server_OnPickupCarryActorFailed_Implementation(uint32 NetID) {
}

void ASBZCharacter::Server_HumanShieldInstigatorSlotReached_Implementation() {
}
bool ASBZCharacter::Server_HumanShieldInstigatorSlotReached_Validate() {
    return true;
}

void ASBZCharacter::RemoveLooseGameplayTags(const FGameplayTagContainer& GameplayTags, int32 Count) {
}

void ASBZCharacter::RemoveLooseGameplayTag(const FGameplayTag& GameplayTag, int32 Count) {
}

void ASBZCharacter::OnStopZipline_Implementation(const ASBZZipline* Zipline, bool bIsMovingZiplineForward) {
}

void ASBZCharacter::OnStopTraversal_Implementation(const FSBZAgilityTraversalTrajectory& Trajectory) {
}

void ASBZCharacter::OnStopSlide_Implementation() {
}

void ASBZCharacter::OnStartZipline_Implementation(const ASBZZipline* Zipline, bool bIsMovingZiplineForward) {
}

void ASBZCharacter::OnStartTraversal_Implementation(const FSBZAgilityTraversalTrajectory& Trajectory) {
}

void ASBZCharacter::OnStartSlide_Implementation() {
}

void ASBZCharacter::OnReplicatedEquippableDestroyedOnClient(AActor* InEquippableActor) {
}

void ASBZCharacter::OnRep_Stance(ESBZCharacterStance InStance) {
}

void ASBZCharacter::OnRep_Seed() {
}

void ASBZCharacter::OnRep_ReplicatedReloadState(const FSBZReplicatedReloadState& OldReplicatedReloadState) {
}

void ASBZCharacter::OnRep_ReplicatedEquippableState() {
}

void ASBZCharacter::OnRep_RandomMeshScaleEnabled() {
}

void ASBZCharacter::OnRep_IsAlive() {
}

void ASBZCharacter::OnRep_HumanShieldInstigatorState() {
}

void ASBZCharacter::OnRep_EquipStateAndIndex() {
}

void ASBZCharacter::OnRep_CurrentThrowableIndex(int32 OldThrowableIndex) {
}

void ASBZCharacter::OnRep_CurrentPlaceableIndex(int32 OldPlaceableIndex) {
}

void ASBZCharacter::OnRep_BagHandleArray(const TArray<FSBZBagHandle>& OldBagHandleArray) {
}

void ASBZCharacter::OnEquipStateTimerDone() {
}

void ASBZCharacter::OnCharacterMontageInstanceEnded(int32 AnimMontageInstanceID, bool bInterrupted) {
}

void ASBZCharacter::Multicast_SwitchMontageSection_Implementation(UAnimMontage* Montage, const FName& SectionName) {
}

void ASBZCharacter::Multicast_StopTargeting_Implementation() {
}

void ASBZCharacter::Multicast_StopRecoil_Implementation(bool bWasCancelled) {
}

void ASBZCharacter::Multicast_StopOverrideMaxWalkSpeed_Implementation() {
}

void ASBZCharacter::Multicast_StopMontage_Implementation(UAnimMontage* Montage, bool bAllowExitSectionSwitch) {
}

void ASBZCharacter::Multicast_StartTargeting_Implementation() {
}

void ASBZCharacter::Multicast_SnapVictimOntoInstigator_Implementation(const FVector& SnapLocation, const ASBZCharacter* HSInstigator) {
}

void ASBZCharacter::Multicast_SetThrowBagAnimationActive_Implementation(bool bActive) {
}

void ASBZCharacter::Multicast_SetStance_Implementation(ESBZCharacterStance NewStance) {
}

void ASBZCharacter::Multicast_SetReloadState_Implementation(const FSBZReplicatedReloadState& InReplicatedReloadState) {
}

void ASBZCharacter::Multicast_SetMontageNextSection_Implementation(UAnimMontage* Montage, const FName& NextSectionName) {
}

void ASBZCharacter::Multicast_SetMarked_Implementation(bool bIsMarked) {
}

void ASBZCharacter::Multicast_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex) {
}

void ASBZCharacter::Multicast_SetEnableRandomMeshScale_Implementation(bool bInEnableRandomMeshScale) {
}

void ASBZCharacter::Multicast_SetCurrentThrowableIndex_Implementation(int32 NewThrowableIndex) {
}

void ASBZCharacter::Multicast_SetCurrentPlaceableIndex_Implementation(int32 NewPlaceableIndex) {
}

void ASBZCharacter::Multicast_SetActiveGadget_Implementation(int32 NewIndex) {
}

void ASBZCharacter::Multicast_PredictedRagdollDenied_Implementation(int32 HurtReactionIndex) {
}

void ASBZCharacter::Multicast_PlayMontageMoveTo_Implementation(UAnimMontage* Montage, const TArray<FTransform>& TargetTransforms, bool bDisableAutoBlendOut) {
}

void ASBZCharacter::Multicast_PlayMontageMoveMulti_Implementation(FName MontageName, const TArray<FTransform>& TargetTransforms) {
}

void ASBZCharacter::Multicast_PlayMontageMove_Implementation(FName MontageName, const FVector& EndMoveToWorldPosition, float PlayRate) {
}

void ASBZCharacter::Multicast_PlayMontage_Implementation(UAnimMontage* Montage, bool bPlayOnDedicatedServer, bool bStopAllActiveMontages) {
}

void ASBZCharacter::Multicast_OverrideMaxWalkSpeed_Implementation(float MaxWalkSpeed) {
}

void ASBZCharacter::Multicast_OnThrowCarryActor_Implementation(uint32 NetID, bool bInIsCarriedLastHitByIgnored) {
}

void ASBZCharacter::Multicast_OnPickupCarryActor_Implementation(uint32 NetID) {
}

void ASBZCharacter::Multicast_OnKill_Implementation() {
}

void ASBZCharacter::Multicast_HumanShieldInstigatorSlotReached_Implementation() {
}

void ASBZCharacter::Multicast_EnableThrowState_Implementation() {
}

void ASBZCharacter::Multicast_DisableThrowState_Implementation() {
}

void ASBZCharacter::Multicast_CancelMelee_Implementation() {
}

void ASBZCharacter::Multicast_ApplyHurtReaction_Implementation(const FSBZHurtReactionPrediction& HurtReactionPrediction) {
}

void ASBZCharacter::Multicast_ActivateMelee_Implementation() {
}

void ASBZCharacter::HandleTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

int32 ASBZCharacter::GetSeed() const {
    return 0;
}

ASBZRoomVolume* ASBZCharacter::GetLastKnownRoom() const {
    return NULL;
}

USBZCarryType* ASBZCharacter::GetLastCurrentCarryType() const {
    return NULL;
}

FSBZBagHandle ASBZCharacter::GetLastBagHandle() const {
    return FSBZBagHandle{};
}

ASBZRoomVolume* ASBZCharacter::GetCurrentRoom_Implementation() const {
    return NULL;
}

void ASBZCharacter::Client_OnThrowCarryActorFailed_Implementation(uint32 NetID) {
}

void ASBZCharacter::Client_OnPickupCarryActorFailed_Implementation(uint32 NetID) {
}



void ASBZCharacter::AddLooseGameplayTags(const FGameplayTagContainer& GameplayTags, int32 Count) {
}

void ASBZCharacter::AddLooseGameplayTag(const FGameplayTag& GameplayTag, int32 Count) {
}

void ASBZCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZCharacter, bRandomMeshScaleEnabled);
    DOREPLIFETIME(ASBZCharacter, BagHandleArray);
    DOREPLIFETIME(ASBZCharacter, ReplicatedMontage);
    DOREPLIFETIME(ASBZCharacter, bIsAlive);
    DOREPLIFETIME(ASBZCharacter, bIsTargeting);
    DOREPLIFETIME(ASBZCharacter, ReplicatedReloadState);
    DOREPLIFETIME(ASBZCharacter, ReplicatedEquippableState);
    DOREPLIFETIME(ASBZCharacter, Stance);
    DOREPLIFETIME(ASBZCharacter, RemoteViewYaw);
    DOREPLIFETIME(ASBZCharacter, EquipStateAndIndex);
    DOREPLIFETIME(ASBZCharacter, TeamId);
    DOREPLIFETIME(ASBZCharacter, CurrentThrowableIndex);
    DOREPLIFETIME(ASBZCharacter, GadgetIndexArray);
    DOREPLIFETIME(ASBZCharacter, CurrentPlaceableIndex);
    DOREPLIFETIME(ASBZCharacter, HumanShieldInstigatorState);
    DOREPLIFETIME(ASBZCharacter, Seed);
}

UAbilitySystemComponent* ASBZCharacter::GetAbilitySystemComponent() const
{
    return nullptr; 
}


