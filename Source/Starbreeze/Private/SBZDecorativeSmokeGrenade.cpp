#include "SBZDecorativeSmokeGrenade.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"


void ASBZDecorativeSmokeGrenade::OnRep_SmokeState() {
}


void ASBZDecorativeSmokeGrenade::OnActorHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASBZDecorativeSmokeGrenade::Multicast_CreateSmokeCloud_Implementation() {
}

void ASBZDecorativeSmokeGrenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZDecorativeSmokeGrenade, SmokeState);
}

ASBZDecorativeSmokeGrenade::ASBZDecorativeSmokeGrenade() {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->GasEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->DetonationEvent = NULL;
    this->DurationSeconds = 15.00f;
    this->Range = 250.00f;
    this->DelayedExplosionTimer = -1.00f;
    this->SmokeState = ESBZDecorativeSmokeState::Spawned;
}

