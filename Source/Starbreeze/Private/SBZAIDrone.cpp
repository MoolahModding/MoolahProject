#include "SBZAIDrone.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "AkComponent.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIDroneAttributeSet.h"
#include "SBZAIDroneMovementComponent.h"
#include "SBZAbilitySystemComponent.h"
#include "SBZApplyMarkedTagEffect.h"
#include "SBZCharacterVoiceComponent.h"
#include "SBZHackableInteractableComponent.h"
#include "SBZOutlineComponent.h"
#include "SBZShoutTargetComponent.h"
#include "SBZSkeletalMeshComponentBudgeted.h"

ASBZAIDrone::ASBZAIDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZSkeletalMeshComponentBudgeted>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<USBZAIDroneMovementComponent>(TEXT("CharMoveComp"))) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AttributeSet = CreateDefaultSubobject<USBZAIDroneAttributeSet>(TEXT("SBZAIDroneAttributeSet"));
    this->DestroyedEffect = NULL;
    this->DestroyedEvent = NULL;
    this->PreferredRangeBuffer = 200.00f;
    this->AbilitySystemComponent = CreateDefaultSubobject<USBZAbilitySystemComponent>(TEXT("SBZAbilitySystemComponent"));
    this->AbilityData = NULL;
    this->AIVisibilityNodeComputationFrequency = ESBZAIVisibilityNodeComputationFrequency::Automatic;
    this->VoiceComponent = CreateDefaultSubobject<USBZCharacterVoiceComponent>(TEXT("SBZCharacterVoiceComponent"));
    this->StimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->ShoutTarget = CreateDefaultSubobject<USBZShoutTargetComponent>(TEXT("SBZShoutTargetComponent"));
    this->RangedWeapon = NULL;
    this->HackableInteractable = CreateDefaultSubobject<USBZHackableInteractableComponent>(TEXT("SBZHackableInteractableComponent"));
    this->RuntimeState = 0;
    this->PlayerExplosionRange = 300.00f;
    this->AIExplosionRange = 500.00f;
    this->EMPEffectClass = NULL;
    this->EMPExplodedEvent = NULL;
    this->EMPDetonationEffect = NULL;
    this->EMPStunDuration = 10.00f;
    this->TacticalFlashEffectClass = NULL;
    this->TacticalFlashPlayerFeedback = NULL;
    this->GuaranteedFlashDistance = 150.00f;
    this->MaximumAngleDifference = 90.00f;
    this->FlashPlayerFalloffExponent = 1.00f;
    this->FlashTagEffectDuration = 5.00f;
    this->TacticalFlashRange = 1000.00f;
    this->BuffBlockMinThreshold = 0.30f;
    this->BuffBlockCooldownAmount = 20.00f;
    this->RuntimedComment = NULL;
    this->FireWeaponComment = NULL;
    this->ExplosionInstigator = NULL;
    this->CurrentTarget = NULL;
    this->StatisticsMarkDrone = TEXT("mark-drone");
    this->StatisticsMarkEnemy = TEXT("mark-enemy");
    this->StatisticsMarkEnemyCamera = TEXT("mark-enemy-camera");
    this->StatisticsMarkEnemyMicroCamera = TEXT("mark-enemy-micro-camera");
    this->AIDamageModifier = 1.00f;
    this->MarkedGameplayEffectClass = USBZApplyMarkedTagEffect::StaticClass();
    this->MarkedOutline = NULL;
    this->AKComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->SentryHackDamageAmount[0] = 0.00f;
    this->SentryHackDamageAmount[1] = 0.00f;
    this->SentryHackDamageAmount[2] = 0.00f;
    this->SentryHackDamageAmount[3] = 0.00f;
    this->SentryHackDamageInterval[0] = 0.00f;
    this->SentryHackDamageInterval[1] = 0.00f;
    this->SentryHackDamageInterval[2] = 0.00f;
    this->SentryHackDamageInterval[3] = 0.00f;
    this->bIsDeathAllowed = true;
    this->bShouldTelegraphAttack = false;
    this->bIsHackingSentry = false;
    this->HackingSentryEffectComponent = NULL;
    this->HackingSentryEffect = NULL;
    this->TraceEffectDistanceName = TEXT("Distance");
    this->TraceEffectStunDurationName = TEXT("StunDuration");
    this->TraceEndBone = TEXT("TurretPitch");
    this->HackingSentryEventStart = NULL;
    this->HackingSentryEventStop = NULL;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}

void ASBZAIDrone::OnServerAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}



void ASBZAIDrone::OnRep_RuntimeState() {
}

void ASBZAIDrone::OnRep_IsHackingSentry() {
}

void ASBZAIDrone::OnPredictedAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZAIDrone::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}

void ASBZAIDrone::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZAIDrone::OnAckAbortInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZAIDrone::Multicast_TelegraphAttack_Implementation(bool bInIsTelegraphingAttack) {
}

void ASBZAIDrone::Multicast_StopHackingSentry_Implementation() {
}

void ASBZAIDrone::Multicast_StartHackingSentry_Implementation() {
}

void ASBZAIDrone::Multicast_SetRuntimed_Implementation(ESBZRuntimeState InRuntimeState) {
}

void ASBZAIDrone::Multicast_SetCurrentTarget_Implementation(AActor* NewTarget) {
}

void ASBZAIDrone::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZAIDrone::Multicast_RemoveRuntime_Implementation(ESBZRuntimeState InRuntimeToRemove) {
}

void ASBZAIDrone::Multicast_PredictedRagdollDenied_Implementation(int32 HurtReactionIndex) {
}

void ASBZAIDrone::Multicast_OnKill_Implementation() {
}


void ASBZAIDrone::AddForce(const FVector& LinearForce) {
}

UAbilitySystemComponent* ASBZAIDrone::GetAbilitySystemComponent() const
{
     return nullptr;
}

void ASBZAIDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIDrone, TeamId);
    DOREPLIFETIME(ASBZAIDrone, RuntimeState);
    DOREPLIFETIME(ASBZAIDrone, CurrentTarget);
    DOREPLIFETIME(ASBZAIDrone, bIsHackingSentry);
}


