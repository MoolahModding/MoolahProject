#include "SBZWaypoint.h"
#include "Components/SceneComponent.h"

ASBZWaypoint::ASBZWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bShowMarkerOnSpawn = false;
    this->MarkerAsset = NULL;
}

void ASBZWaypoint::RemoveMarker() {
}

void ASBZWaypoint::AddMarker() {
}


