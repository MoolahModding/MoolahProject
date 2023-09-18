#include "HoudiniInputHoudiniSplineComponent.h"

UHoudiniInputHoudiniSplineComponent::UHoudiniInputHoudiniSplineComponent() {
    this->CurveType = EHoudiniCurveType::Polygon;
    this->CurveMethod = EHoudiniCurveMethod::CVs;
    this->Reversed = false;
    this->CachedComponent = NULL;
}


