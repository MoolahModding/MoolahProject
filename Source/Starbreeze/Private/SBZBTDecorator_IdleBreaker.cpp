#include "SBZBTDecorator_IdleBreaker.h"

USBZBTDecorator_IdleBreaker::USBZBTDecorator_IdleBreaker() {
    this->bHasPredictedDuration = false;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Idle Breaker");
}


