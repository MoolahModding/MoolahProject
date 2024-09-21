#include "SBZGrenadeProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ASBZGrenadeProjectile::ASBZGrenadeProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionCapsule"));
    this->Tags.AddDefaulted(1);
    this->MarkerAsset = NULL;
    this->MarkerActivationDelay = 0.50f;
    this->EquippableIndex = -1;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
    this->SphereCollision = (USphereComponent*)RootComponent;
    this->OwnerCharacter = NULL;
    this->Delay = 3.00f;
    this->DetonationEvent = NULL;
    this->FiredEvent = NULL;
    this->DetonationEffect = NULL;
    this->DamageGameplayEffectClass = NULL;
    this->DamageTypeClass = NULL;
    this->LocalPlayerFeedback = NULL;
    this->LocalPlayerInstigatorFeedback = NULL;
    this->Data = NULL;
    this->RangedWeaponData = NULL;
    this->bReduceBouncinessPerBounce = false;
    this->BouncinessReductionValue = 0.70f;
    this->MaxTimesToReduceBounciness = 3;
    this->MaxBounces = 10;
    this->bEnablePhysicsOnStopped = false;
    this->bWantsLocationRotation = false;
    this->StaticMesh->SetupAttachment(RootComponent);
}

void ASBZGrenadeProjectile::OnRep_EquippableIndex() {
}

void ASBZGrenadeProjectile::OnProjectileStopped(const FHitResult& InHitResult) {
}

void ASBZGrenadeProjectile::OnProjectileBounce(const FHitResult& InHitResult, const FVector& ImpactVelocity) {
}

void ASBZGrenadeProjectile::OnProjectileBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZGrenadeProjectile::OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


void ASBZGrenadeProjectile::OnCollisionComponentHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBZGrenadeProjectile::Multicast_SetGrenadeProjectileVelocity_Implementation(const FVector_NetQuantizeNormal& ProjectileDirection) {
}

void ASBZGrenadeProjectile::Multicast_SetEquippableIndex_Implementation(int32 InIndex) {
}

void ASBZGrenadeProjectile::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZGrenadeProjectile::Multicast_OnServerCollision_Implementation(const FVector_NetQuantize& InLocation) {
}

void ASBZGrenadeProjectile::Multicast_DestroyBreakable_Implementation(const FHitResult& InBreakableHitResult) {
}

void ASBZGrenadeProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZGrenadeProjectile, EquippableIndex);
}


