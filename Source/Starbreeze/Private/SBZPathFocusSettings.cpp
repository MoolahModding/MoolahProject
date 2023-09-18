#include "SBZPathFocusSettings.h"

USBZPathFocusSettings::USBZPathFocusSettings() {
    this->MinPathLengthGoal = 600.00f;
    this->MinPathLengthNoGoal = 1200.00f;
    this->MinRemainingPathLength = 200.00f;
    this->MinDistanceFromEnemy = 1300.00f;
    this->MinShotRadius = 700.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPathFocusSettings::StaticClass();
}


