#include "SBZAgilitySlideParams.h"

USBZAgilitySlideParams::USBZAgilitySlideParams() {
    this->VelocityAngleAlpha = 0.00f;
    this->MaxAngle = 360.00f;
    this->MaxDistance = 350.00f;
    this->MinDistance = 250.00f;
    this->HeightSlideOver = 15.00f;
    this->ToleranceTimeToSlide = 0.09f;
    this->bUseSlopeModifiers = false;
    this->bUseEntrySpeed = false;
    this->MinEntrySpeed = 300.00f;
    this->EntrySpeedBoost = 0.10f;
    this->DistFromEndToPlayExit = 80.00f;
    this->LocalDistFromEndToPlayExit = 10.00f;
    this->CancelingBackInputAlpha = -0.90f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAgilitySlideParams::StaticClass();
}


