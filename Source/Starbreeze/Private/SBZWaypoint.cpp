#include "SBZWaypoint.h"
#include "Components/SceneComponent.h"

ASBZWaypoint::ASBZWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowMarkerOnSpawn = false;
    this->MarkerAsset = NULL;
    FProperty* p_bCanBeDamaged = GetClass()->FindPropertyByName("bCanBeDamaged");
    *p_bCanBeDamaged->ContainerPtrToValuePtr<uint8>(this) = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZWaypoint::RemoveMarker() {
}

void ASBZWaypoint::AddMarker() {
}


