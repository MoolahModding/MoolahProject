#include "SBZExplosiveTrapGas.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZGasVolumeComponent.h"

ASBZExplosiveTrapGas::ASBZExplosiveTrapGas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageDistanceArray.AddDefaulted(1);
    this->bIsDestroyedOnExplosion = false;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->GasVolumeComponent = CreateDefaultSubobject<USBZGasVolumeComponent>(TEXT("SBZGasVolumeComponent"));
    this->VolumeDamageType = NULL;
    this->DamagePerSecond = 5.00f;
    this->TickSeconds = 0.00f;
    this->GasArmorPenetration = -1.00f;
    this->VolumeDamageEffect = NULL;
    this->GasDuration = 10.00f;
    this->UpdateOverlapsFrequency = 0.50f;
    this->UpdateRemainingLifeTimeInterval = 0.50f;
    this->NiagaraParticleUpdateInterval = 0.50f;
    this->GasLifetimeLeft = 0.00f;
    this->SphereComponent->SetupAttachment(RootComponent);
}

void ASBZExplosiveTrapGas::OnRep_GasDurationLeft() {
}

void ASBZExplosiveTrapGas::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ASBZExplosiveTrapGas::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bIsSweep, const FHitResult& SweepHitResult) {
}

void ASBZExplosiveTrapGas::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZExplosiveTrapGas, GasLifetimeLeft);
}


