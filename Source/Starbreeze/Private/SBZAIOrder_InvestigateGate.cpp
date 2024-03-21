#include "SBZAIOrder_InvestigateGate.h"

USBZAIOrder_InvestigateGate::USBZAIOrder_InvestigateGate() {
    this->BlackboardKey = TEXT("MoveToLocation");
    this->CallReason = EPD3DispatchCallerReason::UnlockedGate;
}

