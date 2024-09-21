#include "SBZGrenade.h"

ASBZGrenade::ASBZGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->InstigatorAbilitySystemComponent = NULL;
    this->DetonationEffect = NULL;
}


void ASBZGrenade::OnCollisionComponentHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void ASBZGrenade::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZGrenade::Multicast_OnServerCollision_Implementation(const FVector_NetQuantize& InLocation) {
}

void ASBZGrenade::Multicast_ExplosionInHand_Implementation() {
}


