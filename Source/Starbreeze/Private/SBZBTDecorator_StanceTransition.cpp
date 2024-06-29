#include "SBZBTDecorator_StanceTransition.h"

USBZBTDecorator_StanceTransition::USBZBTDecorator_StanceTransition() {
    this->NodeName = TEXT("Allow Stance Transition");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->bEnableStanceTransition = false;
}


