#include "SBZDecorativeSmokeGrenade.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

ASBZDecorativeSmokeGrenade::ASBZDecorativeSmokeGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->StaticMesh = (UMeshComponent*)RootComponent;
    this->GasEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->DetonationEvent = NULL;
    this->DurationSeconds = 15.00f;
    this->Range = 250.00f;
    this->DelayedExplosionTimer = -1.00f;
    this->SmokeState = ESBZDecorativeSmokeState::Spawned;
    this->GasEffectComponent->SetupAttachment(RootComponent);
}


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


