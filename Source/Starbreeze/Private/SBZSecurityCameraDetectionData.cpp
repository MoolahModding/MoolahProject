#include "SBZSecurityCameraDetectionData.h"

FSBZSecurityCameraDetectionData::FSBZSecurityCameraDetectionData() {
    this->CurrentDetection = 0.00f;
    this->bIsPerceived = false;
    this->DetectionLevel = ESBZCameraDetectionLevel::None;
}

