#include "SBZAIOrder_MoveTo.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_MoveTo::USBZAIOrder_MoveTo() {
    this->BlackboardKey = TEXT("MoveToLocation");
    this->Category = ESBZAIBehaviorCategory::Idle;
}

void USBZAIOrder_MoveTo::SetMoveToLocation(const FVector& Location) {
}


