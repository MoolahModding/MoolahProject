#include "SBZBTDecorator_CheckCoverSafeness.h"

USBZBTDecorator_CheckCoverSafeness::USBZBTDecorator_CheckCoverSafeness() {
    this->MinSafenessScore = 20;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Check Cover Safeness");
}


