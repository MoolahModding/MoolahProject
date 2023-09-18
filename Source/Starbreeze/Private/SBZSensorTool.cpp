#include "SBZSensorTool.h"
#include "Components/StaticMeshComponent.h"

ASBZSensorTool::ASBZSensorTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SensorToolTargetVisibleEvent = NULL;
    this->SensorToolTurnedOnEvent = NULL;
    this->SensorToolTurnedOffEvent = NULL;
    this->SensorToolModeSwitchedEvent = NULL;
    this->OnSensorToolTargetVisibleEventRtpc = NULL;
    this->OnSensorToolTurnedOnEventRtpc = NULL;
    this->OnSensorToolTurnedOffEventRtpc = NULL;
    this->OnSensorToolModeSwitchedEventRtpc = NULL;
    this->SensorGlassMeshBounds = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SensorGlassMeshBounds"));
    this->SensorGlassMeshBounds->SetupAttachment(SkeletalMesh);
}

void ASBZSensorTool::Server_SensorToolTurnedOn_Implementation() {
}

void ASBZSensorTool::Server_SensorToolTurnedOff_Implementation() {
}

void ASBZSensorTool::Server_SensorToolTargetVisible_Implementation() {
}

void ASBZSensorTool::Server_SensorToolModeSwitched_Implementation() {
}





void ASBZSensorTool::OnMarkedTargetEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ASBZSensorTool::Multicast_SensorToolTurnedOn_Implementation() {
}

void ASBZSensorTool::Multicast_SensorToolTurnedOff_Implementation() {
}

void ASBZSensorTool::Multicast_SensorToolTargetVisible_Implementation() {
}

void ASBZSensorTool::Multicast_SensorToolModeSwitched_Implementation() {
}


