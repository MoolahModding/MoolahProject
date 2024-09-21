#include "SBZPatrolPoint.h"
#include "Components/SceneComponent.h"

ASBZPatrolPoint::ASBZPatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PatrolRoot"));
    this->bRandomSet = false;
    this->bUsePointRotation = false;
    this->bIsTesting = false;
}

bool ASBZPatrolPoint::IsTestingPoint() const {
    return false;
}

void ASBZPatrolPoint::Disconnect(ASBZPatrolPoint* Next) {
}

void ASBZPatrolPoint::Connect(ASBZPatrolPoint* Next) {
}


