#include "SBZBTDecorator_StanceTransition.h"

USBZBTDecorator_StanceTransition::USBZBTDecorator_StanceTransition() {
    this->bEnableStanceTransition = false;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Allow Stance Transition");
}


