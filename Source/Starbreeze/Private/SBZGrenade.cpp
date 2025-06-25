#include "SBZGrenade.h"
#include "Net/UnrealNetwork.h"

ASBZGrenade::ASBZGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->InstigatorAbilitySystemComponent = NULL;
    this->DetonationEffect = NULL;
    this->bIsArmorConductor = false;
}

void ASBZGrenade::OnRep_IsArmorConductor() {
}


void ASBZGrenade::OnCollisionComponentHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void ASBZGrenade::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZGrenade::Multicast_OnServerCollision_Implementation(bool bInIsExplodedOnCharacter, const FVector_NetQuantize& InLocation) {
}

void ASBZGrenade::Multicast_ExplosionInHand_Implementation() {
}

void ASBZGrenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZGrenade, bIsArmorConductor);
}


