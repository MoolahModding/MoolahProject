#include "SBZBTDecorator_TargetIsNear.h"

USBZBTDecorator_TargetIsNear::USBZBTDecorator_TargetIsNear() {
    this->TargetAllowedDistance = 500.00f;
    this->NearMarker = ESBZMarkerState::None;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Target Is Near");
}


