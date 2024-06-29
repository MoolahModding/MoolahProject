#include "SBZVehicleSpawnComponent.h"

USBZVehicleSpawnComponent::USBZVehicleSpawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableForAssault = false;
    this->MaxNumSpawn = -1;
    this->bInitialSpawnOnly = false;
    this->bCustomSpawnCompleted = false;
    this->SpawnGroup = NULL;
}

void USBZVehicleSpawnComponent::SpawnCompleted(ESBZVehicleSpawnResult Result) {
}

void USBZVehicleSpawnComponent::OnWheeledStarted(ASBZWheeledVehicle* Vehicle, ASBZSpline* Spline) {
}

void USBZVehicleSpawnComponent::OnWheeledReachedPathEnd(ASBZWheeledVehicle* Vehicle) {
}

void USBZVehicleSpawnComponent::OnPawnSpawned(APD3PawnSpawnGroup* InSpawnGroup, ASBZPawnSpawnBase* Spawner, APawn* Pawn) {
}

void USBZVehicleSpawnComponent::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void USBZVehicleSpawnComponent::OnAerialStarted(ASBZAerialVehicle* Vehicle, ASBZSpline* Spline) {
}

void USBZVehicleSpawnComponent::OnAerialReachedPathEnd(ASBZAerialVehicle* Vehicle) {
}


