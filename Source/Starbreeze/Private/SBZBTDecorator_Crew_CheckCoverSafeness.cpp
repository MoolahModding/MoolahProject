#include "SBZBTDecorator_Crew_CheckCoverSafeness.h"

USBZBTDecorator_Crew_CheckCoverSafeness::USBZBTDecorator_Crew_CheckCoverSafeness() {
    this->MinSafenessScore = 20;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Crew Check Cover Safeness");
}


