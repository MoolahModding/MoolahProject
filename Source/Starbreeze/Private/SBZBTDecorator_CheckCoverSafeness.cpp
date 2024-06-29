#include "SBZBTDecorator_CheckCoverSafeness.h"

USBZBTDecorator_CheckCoverSafeness::USBZBTDecorator_CheckCoverSafeness() {
    this->NodeName = TEXT("Check Cover Safeness");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->MinSafenessScore = 20;
}


