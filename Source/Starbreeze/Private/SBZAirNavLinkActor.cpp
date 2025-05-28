#include "SBZAirNavLinkActor.h"
#include "Components/SceneComponent.h"
#include "SBZAirNavLinkComponent.h"

ASBZAirNavLinkActor::ASBZAirNavLinkActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AirNavLinkComponent = CreateDefaultSubobject<USBZAirNavLinkComponent>(TEXT("SBZAirNavLinkComponent"));
}

void ASBZAirNavLinkActor::SetNavLinkEnabled(bool bIsEnabled) {
}


