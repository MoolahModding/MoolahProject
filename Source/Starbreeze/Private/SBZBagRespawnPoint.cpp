#include "SBZBagRespawnPoint.h"
#include "Components/SceneComponent.h"

ASBZBagRespawnPoint::ASBZBagRespawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartEnabled = true;
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZBagRespawnPoint::EnableBagRespawnPoint() {
}

void ASBZBagRespawnPoint::DisableBagRespawnPoint() {
}


