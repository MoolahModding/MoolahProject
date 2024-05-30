#include "SBZPlaceableSensorTool.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

ASBZPlaceableSensorTool::ASBZPlaceableSensorTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->AutoMarkTickInterval = 2.00f;
    this->SensorRange = 500.00f;
    this->MaxMarkableAICount = 10;
    this->bIsPickupDisabled = false;
    this->BoxComponent->SetupAttachment(RootComponent);
    this->SphereComponent->SetupAttachment(RootComponent);
}

void ASBZPlaceableSensorTool::Multicast_SensorAmmoDepleted_Implementation() {
}

void ASBZPlaceableSensorTool::Client_DisablePickup_Implementation() {
}

void ASBZPlaceableSensorTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableSensorTool, bIsPickupDisabled);
}


