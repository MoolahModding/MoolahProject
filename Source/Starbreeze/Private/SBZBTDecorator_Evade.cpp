#include "SBZBTDecorator_Evade.h"

USBZBTDecorator_Evade::USBZBTDecorator_Evade() {
    this->NodeName = TEXT("Evade");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->FilterClass = NULL;
    this->bCanTriggerSlowEvade = true;
    this->bCanTriggerFastEvade = true;
    this->bUseMaxSpeedLimit = true;
}


