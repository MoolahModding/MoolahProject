#include "SBZBTDecorator_Crew_CheckCoverSafeness.h"

USBZBTDecorator_Crew_CheckCoverSafeness::USBZBTDecorator_Crew_CheckCoverSafeness() {
    this->NodeName = TEXT("Crew Check Cover Safeness");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->MinSafenessScore = 20;
}


