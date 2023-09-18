#include "SBZAIOrder_Patrol.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_Patrol::USBZAIOrder_Patrol() {
    this->StartPoint = NULL;
    this->BlackboardKey = TEXT("MoveToLocation");
    this->BlackboardWaitTimeKey = TEXT("WaitTime");
    this->CurrentPoint = NULL;
    this->bIsPersistent = true;
    this->Category = ESBZAIBehaviorCategory::Idle;
}


