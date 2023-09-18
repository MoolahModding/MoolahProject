#include "SBZBTDecorator_Evade.h"

USBZBTDecorator_Evade::USBZBTDecorator_Evade() {
    this->FilterClass = NULL;
    this->FilterClass = NULL;
    this->bCanTriggerSlowEvade = true;
    this->bCanTriggerFastEvade = true;
    this->bUseMaxSpeedLimit = true;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Evade");
}


