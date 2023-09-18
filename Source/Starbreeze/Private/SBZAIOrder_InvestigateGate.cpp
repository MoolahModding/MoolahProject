#include "SBZAIOrder_InvestigateGate.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_InvestigateGate::USBZAIOrder_InvestigateGate() {
    this->BlackboardKey = TEXT("MoveToLocation");
    this->CallReason = EPD3DispatchCallerReason::UnlockedGate;
    this->Category = ESBZAIBehaviorCategory::Suspiscious;
}


