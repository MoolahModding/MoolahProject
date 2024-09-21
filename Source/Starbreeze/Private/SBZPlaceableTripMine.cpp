#include "SBZPlaceableTripMine.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"

ASBZPlaceableTripMine::ASBZPlaceableTripMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->ExplosionInstigator = NULL;
    this->PlaceableTripMineEffectClass = NULL;
    this->PlaceableTripMineExplodedEvent = NULL;
    this->DetonationEffect = NULL;
    this->AIExplosionRange = 500.00f;
    this->PlayerExplosionRange = 300.00f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->BoxComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void ASBZPlaceableTripMine::Server_SetUnarmed_Implementation() {
}

void ASBZPlaceableTripMine::Server_SetArmed_Implementation() {
}

void ASBZPlaceableTripMine::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


