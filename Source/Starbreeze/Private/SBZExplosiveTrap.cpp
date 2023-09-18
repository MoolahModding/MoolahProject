#include "SBZExplosiveTrap.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "SBZExplosionDamageType.h"

ASBZExplosiveTrap::ASBZExplosiveTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionSoundEvent = NULL;
    this->AIExplosionRadius = 500.00f;
    this->PlayerExplosionRadius = 300.00f;
    this->DamageDistanceArray.AddDefaulted(1);
    this->ArmorPenetration = 1.00f;
    this->FriendlyFireDamageScale = 1.00f;
    this->FriendlyFireArmorPenetrationScale = 1.00f;
    this->ExplosionDamageType = USBZExplosionDamageType::StaticClass();
    this->GameplayEffectClass = NULL;
    this->GameplayEffectClass = NULL;
    this->ExplosionEffect = NULL;
    this->bDoDecal = true;
    this->NumberOfShotsToExplode = 3;
    this->NumberOfHitsForCriticalDamage = 1;
    this->LocalplayerFeedback = NULL;
    this->LocalplayerFeedback = NULL;
    this->bUseImpactPointForEffect = false;
    this->CriticalDamageEffect = NULL;
    this->MarkerAsset = NULL;
    this->NumberOfHitShots = 0;
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->NiagaraComponent->SetupAttachment(RootComponent);
    this->MarkerId = -1;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZExplosiveTrap::Multicast_ReplicateExplosionWithInstigator_Implementation(const FSBZExplosionResult& Result, AActor* InExplosionInstigator) {
}

void ASBZExplosiveTrap::Multicast_CriticalDamageNoParams_Implementation() {
}

void ASBZExplosiveTrap::Multicast_CriticalDamage_Implementation(const FVector ImpactLocation, const FVector ImpactNormal) {
}




