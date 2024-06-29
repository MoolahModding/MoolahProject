#include "SBZExplosiveTrap.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

ASBZExplosiveTrap::ASBZExplosiveTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DamageDistanceArray.AddDefaulted(1);
    this->NumberOfShotsToExplode = 3;
    this->NumberOfHitsForCriticalDamage = 1;
    this->bUseImpactPointForEffect = false;
    this->CriticalDamageEffect = NULL;
    this->MarkerAsset = NULL;
    this->NumberOfHitShots = 0;
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->MarkerId = -1;
    this->NiagaraComponent->SetupAttachment(RootComponent);
}

void ASBZExplosiveTrap::Multicast_CriticalDamageNoParams_Implementation() {
}

void ASBZExplosiveTrap::Multicast_CriticalDamage_Implementation(const FVector ImpactLocation, const FVector ImpactNormal) {
}



