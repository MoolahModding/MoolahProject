#include "SBZBTDecorator_Focus.h"

USBZBTDecorator_Focus::USBZBTDecorator_Focus() {
    this->bShouldLockFocus = false;
    this->FocusPriority = ESBZFocusPriority::AI;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Focus on Target");
}


