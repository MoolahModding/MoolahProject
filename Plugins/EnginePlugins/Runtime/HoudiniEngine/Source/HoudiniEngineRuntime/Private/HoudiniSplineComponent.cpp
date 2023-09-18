#include "HoudiniSplineComponent.h"

UHoudiniSplineComponent::UHoudiniSplineComponent() {
    this->CurvePoints.AddDefaulted(2);
    this->DisplayPoints.AddDefaulted(2);
    this->bClosed = false;
    this->bReversed = false;
    this->bIsHoudiniSplineVisible = true;
    this->CurveType = EHoudiniCurveType::Polygon;
    this->CurveMethod = EHoudiniCurveMethod::CVs;
    this->bIsOutputCurve = false;
    this->bCookOnCurveChanged = true;
    this->bHasChanged = false;
    this->bNeedsToTriggerUpdate = false;
    this->bIsInputCurve = false;
    this->bIsEditableOutputCurve = false;
    this->NodeId = -1;
}


