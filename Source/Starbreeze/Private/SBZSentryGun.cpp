#include "SBZSentryGun.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZSentryExplosionDamageType.h"
#include "SBZSentryGunAttributeSet.h"
#include "SBZSentryInteractableComponent.h"

ASBZSentryGun::ASBZSentryGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->Tags.AddDefaulted(1);
    this->FireCooldown = 3.00f;
    this->FireTime = 3.00f;
    this->YawRotation = 170.00f;
    this->RotationCooldown = 5.00f;
    this->RotationSpeed = 70.00f;
    this->SelfOverheatDamagePerShot = 1.00f;
    this->DeployMontage = NULL;
    this->CurrentTarget = NULL;
    this->LastTarget = NULL;
    this->CurrentMarkedTarget = NULL;
    this->AttributeSet = CreateDefaultSubobject<USBZSentryGunAttributeSet>(TEXT("SBZSentryGunAttributeSet"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->RotationEvent = NULL;
    this->RotationStopEvent = NULL;
    this->OverheatEvent = NULL;
    this->DetonationEvent = NULL;
    this->Interactable = CreateDefaultSubobject<USBZSentryInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OwnerPlayerState = NULL;
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->CurrentSentryRotationCooldown = 0.00f;
    this->LocallyControlledOutline = NULL;
    this->ExplosionRange = 500.00f;
    this->DetonationEffect = NULL;
    this->DamageGameplayEffectClass = NULL;
    this->DamageTypeClass = USBZSentryExplosionDamageType::StaticClass();
    this->LocalplayerFeedback = NULL;
    this->DamageDistanceArray.AddDefaulted(1);
    this->FriendlyPlayerDamageScale = 0.25f;
    this->bUseInstigatorPlayerDamageScale = false;
    this->InstigatorPlayerDamageScale = 1.00f;
    this->ExplosionArmorPenetration = 0.00f;
    this->OutOfBoundsBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("OutOfBoundsBoxComp"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->HackingDrone = NULL;
    this->OutOfBoundsBoxComponent->SetupAttachment(SkeletalMeshComponent);
    this->AudioComponent->SetupAttachment(SkeletalMeshComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void ASBZSentryGun::OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor) {
}

void ASBZSentryGun::OnSentryEnemyMarked(APawn* InPawn, float InDuration) {
}

void ASBZSentryGun::OnRep_YawRotation() {
}

void ASBZSentryGun::OnRep_TargetLocation() {
}

void ASBZSentryGun::OnRep_OwnerPlayerState() {
}

void ASBZSentryGun::OnParentActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ASBZSentryGun::OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}



void ASBZSentryGun::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bIsLocallyControlledInteractor) {
}

void ASBZSentryGun::Multicast_SetCurrentTarget_Implementation(AActor* NewCurrentTarget) {
}

void ASBZSentryGun::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZSentryGun::Multicast_ReachedTargetLocation_Implementation(const FVector& InTargetLocation, const FRotator& InTargetRotation) {
}

void ASBZSentryGun::Multicast_Fall_Implementation(const FVector& InStartLocation, const FVector& InTargetLocation, const FQuat& InTargetQuat) {
}

void ASBZSentryGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZSentryGun, YawRotation);
    DOREPLIFETIME(ASBZSentryGun, CurrentScanTargetDirection);
    DOREPLIFETIME(ASBZSentryGun, OwnerPlayerState);
    DOREPLIFETIME(ASBZSentryGun, CurrentSentryRotation);
    DOREPLIFETIME(ASBZSentryGun, CurrentSentryRotationCooldown);
    DOREPLIFETIME(ASBZSentryGun, TargetLocation);
}


