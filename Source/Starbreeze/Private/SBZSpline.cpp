#include "SBZSpline.h"
#include "SBZSplineComponent.h"

ASBZSpline::ASBZSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<USBZSplineComponent>(TEXT("SBZSplineComponent"));
    this->RootComponent = SplineComponent;
}

TArray<ASBZSpline*> ASBZSpline::GetOutputSplines() const {
    return TArray<ASBZSpline*>();
}

TArray<ASBZSpline*> ASBZSpline::GetInputSplines() const {
    return TArray<ASBZSpline*>();
}


