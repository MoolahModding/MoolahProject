#include "GamepadCursorSettings.h"

UGamepadCursorSettings::UGamepadCursorSettings() {
    this->MaxAnalogCursorSpeed = 1300.00f;
    this->MaxAnalogCursorSpeedWhenHovered = 650.00f;
    this->AnalogCursorDragCoefficient = 8.00f;
    this->AnalogCursorDragCoefficientWhenHovered = 14.00f;
    this->MinAnalogCursorSpeed = 5.00f;
    this->AnalogCursorDeadZone = 0.15f;
    this->AnalogCursorAccelerationMultiplier = 9000.00f;
    this->AnalogCursorSize = 40.00f;
    this->bUseEngineAnalogCursor = false;
    this->bAnalogCursorNoAcceleration = false;
}


