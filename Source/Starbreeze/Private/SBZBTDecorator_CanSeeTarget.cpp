#include "SBZBTDecorator_CanSeeTarget.h"

USBZBTDecorator_CanSeeTarget::USBZBTDecorator_CanSeeTarget() {
    this->NodeName = TEXT("Can See Target");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->bUseSlackTime = false;
    this->SlackTime = 0.00f;
    this->bCheckVisualDetection = true;
    this->bCheckRange = false;
}


