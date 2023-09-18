#include "SBZVantagePoint.h"
#include "Components/SceneComponent.h"

ASBZVantagePoint::ASBZVantagePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZVantagePoint::OnOccupantKilled(APawn* Pawn) {
}


