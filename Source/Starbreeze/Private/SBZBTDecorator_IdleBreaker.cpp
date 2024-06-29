#include "SBZBTDecorator_IdleBreaker.h"

USBZBTDecorator_IdleBreaker::USBZBTDecorator_IdleBreaker() {
    this->NodeName = TEXT("Idle Breaker");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->bHasPredictedDuration = false;
}


