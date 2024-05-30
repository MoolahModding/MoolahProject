#include "SBZAIOrder_MoveTo.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_MoveTo::USBZAIOrder_MoveTo() {
    this->Category = ESBZAIBehaviorCategory::Idle;
    this->BlackboardKey = TEXT("MoveToLocation");
}

void USBZAIOrder_MoveTo::SetMoveToLocation(const FVector& Location) {
}


