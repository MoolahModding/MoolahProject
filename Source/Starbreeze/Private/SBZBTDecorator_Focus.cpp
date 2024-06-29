#include "SBZBTDecorator_Focus.h"

USBZBTDecorator_Focus::USBZBTDecorator_Focus() {
    this->NodeName = TEXT("Focus on Target");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->bShouldLockFocus = false;
    this->FocusPriority = ESBZFocusPriority::AI;
}


