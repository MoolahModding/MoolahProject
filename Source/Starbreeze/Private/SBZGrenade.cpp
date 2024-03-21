#include "SBZGrenade.h"

void ASBZGrenade::OnCollisionComponentHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void ASBZGrenade::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

ASBZGrenade::ASBZGrenade() {
    this->InstigatorAbilitySystemComponent = NULL;
    this->DetonationEffect = NULL;
}

