#include "SBZSpline.h"
#include "SBZSplineComponent.h"

TArray<ASBZSpline*> ASBZSpline::GetOutputSplines() const {
    return TArray<ASBZSpline*>();
}

TArray<ASBZSpline*> ASBZSpline::GetInputSplines() const {
    return TArray<ASBZSpline*>();
}

ASBZSpline::ASBZSpline() {
    this->SplineComponent = CreateDefaultSubobject<USBZSplineComponent>(TEXT("SBZSplineComponent"));
}

