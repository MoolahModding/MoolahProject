#include "SBZTripper.h"
#include "Components/BoxComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

ASBZTripper::ASBZTripper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->LaserEffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->MaxDistance = 10000.00f;
    this->SurfaceOffset = 5.00f;
    this->MarkedDuration = 10.00f;
    this->CurrentTarget = NULL;
    this->BoxComponent->SetupAttachment(RootComponent);
    this->LaserEffectComponent->SetupAttachment(RootComponent);
}

void ASBZTripper::OnRep_CurrentTarget() {
}

void ASBZTripper::Multicast_SetCurrentTarget_Implementation(AActor* InHitActor) {
}



void ASBZTripper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZTripper, CurrentTarget);
}


