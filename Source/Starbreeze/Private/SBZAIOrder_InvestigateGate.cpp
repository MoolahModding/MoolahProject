#include "SBZAIOrder_InvestigateGate.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_InvestigateGate::USBZAIOrder_InvestigateGate() {
    this->Category = ESBZAIBehaviorCategory::Suspiscious;
    this->BlackboardKey = TEXT("MoveToLocation");
    this->CallReason = EPD3DispatchCallerReason::UnlockedGate;
}


