#include "SBZGasGrenade.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZGasVolumeComponent.h"

void ASBZGasGrenade::OnRep_GasExplosionData() {
}

void ASBZGasGrenade::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ASBZGasGrenade::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bIsSweep, const FHitResult& SweepHitResult) {
}

void ASBZGasGrenade::Multicast_ReplicateExplosionLocation_Implementation(const FVector_NetQuantize& Location) {
}

void ASBZGasGrenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZGasGrenade, GasExplosionRepData);
}

ASBZGasGrenade::ASBZGasGrenade() {
    this->NiagaraParticleUpdateInterval = 0.50f;
    this->UpdateOverlapsInterval = 0.25f;
    this->UpdateRemainingLifeTimeInterval = 0.25f;
    this->RootCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    this->GasCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->GasComponent = CreateDefaultSubobject<USBZGasVolumeComponent>(TEXT("SBZGasVolumeComponent"));
}

