#include "SBZBTDecorator_TargetIsNear.h"

USBZBTDecorator_TargetIsNear::USBZBTDecorator_TargetIsNear() {
    this->NodeName = TEXT("Target Is Near");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->TargetAllowedDistance = 500.00f;
    this->NearMarker = ESBZMarkerState::None;
}


