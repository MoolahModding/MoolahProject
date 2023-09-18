#include "SBZBTDecorator_CanSeeTarget.h"

USBZBTDecorator_CanSeeTarget::USBZBTDecorator_CanSeeTarget() {
    this->bUseSlackTime = false;
    this->SlackTime = 0.00f;
    this->bCheckVisualDetection = true;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Can See Target");
}


