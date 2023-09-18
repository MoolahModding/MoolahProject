#include "SBZAgilityTraversalQueryParams.h"

USBZAgilityTraversalQueryParams::USBZAgilityTraversalQueryParams() {
    this->MaxAngleToWall = 65.00f;
    this->MaxSearchIterationCount = 4;
    this->RadiusShrinkFactor = 0.65f;
    this->FootHeightTolerance = 10.00f;
    this->CapsuleRadius = 30.00f;
    this->CapsuleHalfHeightStanding = 90.00f;
    this->CapsuleHalfHeightCrouching = 40.00f;
    this->CapsuleHalfHeightTraversing = 40.00f;
    this->bKeepLandPointOnFloor = true;
    this->MaxReflectionAngle = 45.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAgilityTraversalQueryParams::StaticClass();
}


