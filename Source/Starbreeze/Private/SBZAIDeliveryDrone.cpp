#include "SBZAIDeliveryDrone.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"

ASBZAIDeliveryDrone::ASBZAIDeliveryDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverkillWeaponBagType = NULL;
    this->PreferredRange = 100.00f;
    this->BackupBehaviorTree = NULL;
    this->StartEvent = NULL;
    this->StopEvent = NULL;
    this->DropBagEvent = NULL;
    this->DespawnEvent = NULL;
    //this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->bIsBagDropped = false;
    //this->AkComponent->SetupAttachment(RootComponent);
}

void ASBZAIDeliveryDrone::OnRep_IsBagDropped() {
}

void ASBZAIDeliveryDrone::Multicast_DropBag_Implementation() {
}

void ASBZAIDeliveryDrone::Multicast_DespawnSplineReached_Implementation() {
}


void ASBZAIDeliveryDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAIDeliveryDrone, bIsBagDropped);
}


