#include "SBZSplineComponent.h"

USBZSplineComponent::USBZSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bYawControlEnabled = false;
    this->bReverse = false;
    this->SplineType = ESBZSplineType::Forward;
}


