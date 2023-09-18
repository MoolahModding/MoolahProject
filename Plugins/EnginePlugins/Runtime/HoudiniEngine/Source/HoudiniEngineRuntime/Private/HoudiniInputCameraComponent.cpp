#include "HoudiniInputCameraComponent.h"

UHoudiniInputCameraComponent::UHoudiniInputCameraComponent() {
    this->FOV = 0.00f;
    this->AspectRatio = 1.00f;
    this->bIsOrthographic = false;
    this->OrthoWidth = 2.00f;
    this->OrthoNearClipPlane = 0.00f;
    this->OrthoFarClipPlane = -1.00f;
}


