#include "SBZGrenade.h"

ASBZGrenade::ASBZGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstigatorAbilitySystemComponent = NULL;
    this->DetonationEffect = NULL;
    this->Tags.AddDefaulted(1);
}

void ASBZGrenade::OnCollisionComponentHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void ASBZGrenade::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZGrenade::Multicast_CollisionExplosion_Implementation() {
}


