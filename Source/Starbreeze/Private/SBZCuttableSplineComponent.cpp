#include "SBZCuttableSplineComponent.h"

void USBZCuttableSplineComponent::SetupSplineComponent() {
}

USBZCuttableSplineComponent::USBZCuttableSplineComponent() {
    this->Segments = 20;
    this->Radius = 15.00f;
    this->LineLength = 25.00f;
    this->RadiusPadding = 5.00f;
    this->CuttableSplineType = ESBZCuttableSplineType::Circle;
}

