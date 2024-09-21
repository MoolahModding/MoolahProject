#include "SBZGasGrenade.h"
#include "Components/SphereComponent.h"
#include "ESBZThrowableState.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIGasGrenadeData.h"
#include "SBZGasVolumeComponent.h"

ASBZGasGrenade::ASBZGasGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    this->Tags.AddDefaulted(1);
    this->ThrowableState = ESBZThrowableState::None;
    this->DataType = USBZAIGasGrenadeData::StaticClass();
    this->NiagaraParticleUpdateInterval = 0.50f;
    this->UpdateOverlapsInterval = 0.25f;
    this->UpdateRemainingLifeTimeInterval = 0.25f;
    this->RootCollision = (USphereComponent*)RootComponent;
    this->GasCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->GasComponent = CreateDefaultSubobject<USBZGasVolumeComponent>(TEXT("SBZGasVolumeComponent"));
}

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


