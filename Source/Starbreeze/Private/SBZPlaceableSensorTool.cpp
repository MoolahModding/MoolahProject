#include "SBZPlaceableSensorTool.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

void ASBZPlaceableSensorTool::Multicast_SensorAmmoDepleted_Implementation() {
}

ASBZPlaceableSensorTool::ASBZPlaceableSensorTool() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->AutoMarkTickInterval = 2.00f;
    this->SensorRange = 500.00f;
    this->MaxMarkableAICount = 10;
}

