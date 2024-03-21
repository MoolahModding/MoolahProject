#include "SBZAIPointOfInterest.h"
#include "Components/SphereComponent.h"
#include "SBZAIAttractorComponent.h"

void ASBZAIPointOfInterest::OnOwnerDestroyed(AActor* DestroyedActor) {
}


ASBZAIPointOfInterest::ASBZAIPointOfInterest() {
    this->bAutoEnable = true;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
}

