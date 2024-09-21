#include "SBZTrafficSpline.h"

ASBZTrafficSpline::ASBZTrafficSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrafficManager = NULL;
    this->SplineTypeFlags = 0;
    this->VehicleTypeFlags = 47;
}


