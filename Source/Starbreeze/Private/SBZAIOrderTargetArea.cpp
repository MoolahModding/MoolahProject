#include "SBZAIOrderTargetArea.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASBZAIOrderTargetArea::ASBZAIOrderTargetArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->bEnabled = true;
    this->bConsiderCoversDirection = true;
    this->ArcAngle = 30.00f;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->BoxComponent->SetupAttachment(RootComponent);
}

void ASBZAIOrderTargetArea::UpdateCoverPoints() {
}

void ASBZAIOrderTargetArea::SetEnabled(bool bEnable) {
}

bool ASBZAIOrderTargetArea::IsEnabled() const {
    return false;
}


