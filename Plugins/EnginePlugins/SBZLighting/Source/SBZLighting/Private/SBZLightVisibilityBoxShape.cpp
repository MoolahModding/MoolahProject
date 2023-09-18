#include "SBZLightVisibilityBoxShape.h"
#include "Components/BoxComponent.h"

ASBZLightVisibilityBoxShape::ASBZLightVisibilityBoxShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}


