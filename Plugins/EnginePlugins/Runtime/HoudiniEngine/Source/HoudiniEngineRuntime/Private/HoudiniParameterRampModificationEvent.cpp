#include "HoudiniParameterRampModificationEvent.h"

UHoudiniParameterRampModificationEvent::UHoudiniParameterRampModificationEvent() {
    this->bIsInsertEvent = false;
    this->bIsFloatRamp = false;
    this->DeleteInstanceIndex = -1;
    this->InsertPosition = 0.00f;
    this->InsertFloat = 0.00f;
    this->InsertInterpolation = EHoudiniRampInterpolationType::CONSTANT;
}


