#include "SBZWindVolume.h"
#include "SBZWindEmitterComponent.h"

ASBZWindVolume::ASBZWindVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmitterComponent = CreateDefaultSubobject<USBZWindEmitterComponent>(TEXT("SBZWindEmitterComponent"));
    this->EmitterComponent->SetupAttachment(RootComponent);
}


