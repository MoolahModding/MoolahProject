#include "SBZSmallCosmeticDestruction.h"
#include "Components/StaticMeshComponent.h"

ASBZSmallCosmeticDestruction::ASBZSmallCosmeticDestruction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("StaticMeshComponent0"))) {
    this->bMoveToDebris = true;
    this->bDestroyWhenActivated = false;
    this->bCanBeActivatedByPlayerOverlap = true;
    this->bReceivesDamageFromMelee = true;
    this->MinimumImpactForce = 10.00f;
    this->PhysicalMaterial = NULL;
    FProperty* p_bCanBeDamaged = GetClass()->FindPropertyByName("bCanBeDamaged");
    *p_bCanBeDamaged->ContainerPtrToValuePtr<uint8>(this) = true;
    this->Tags.AddDefaulted(1);
    /*this->bWantsDetailedDamageEvents = true;*/
}

void ASBZSmallCosmeticDestruction::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBZSmallCosmeticDestruction::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ASBZSmallCosmeticDestruction::HandleTakeRadialDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, const TArray<FHitResult>& HitInfos, const FRadialDamageParams& Params, const FVector& Origin, const UDamageType* DamageType, AActor* DamageCauser) {
}

void ASBZSmallCosmeticDestruction::HandleTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void ASBZSmallCosmeticDestruction::HandleTakeOverlapDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, const TArray<FHitResult>& HitInfos, const FVector& OriginDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void ASBZSmallCosmeticDestruction::CreateImpactPoint(const FHitResult& Hit) {
}


