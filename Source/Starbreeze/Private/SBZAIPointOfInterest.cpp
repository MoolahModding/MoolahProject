#include "SBZAIPointOfInterest.h"
#include "Components/SphereComponent.h"
#include "SBZAIAttractorComponent.h"

ASBZAIPointOfInterest::ASBZAIPointOfInterest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->bAutoEnable = true;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->SphereCollision = (USphereComponent*)RootComponent;
}

void ASBZAIPointOfInterest::OnOwnerDestroyed(AActor* DestroyedActor) {
}



