#include "SBZDebris.h"
#include "Components/StaticMeshComponent.h"

ASBZDebris::ASBZDebris(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("StaticMeshComponent0"))) {
    this->MinimumImpactForce = 10.00f;
    this->PhysicalMaterial = NULL;
    this->bCanBeInCluster = false;
}

void ASBZDebris::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBZDebris::CreateImpactPoint(const FHitResult& Hit) {
}


