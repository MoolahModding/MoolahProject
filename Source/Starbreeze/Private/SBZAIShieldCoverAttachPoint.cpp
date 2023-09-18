#include "SBZAIShieldCoverAttachPoint.h"
#include "Components/SceneComponent.h"

ASBZAIShieldCoverAttachPoint::ASBZAIShieldCoverAttachPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Occupier = NULL;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


