#include "SBZAIOrder_Patrol.h"

USBZAIOrder_Patrol::USBZAIOrder_Patrol() {
    this->StartPoint = NULL;
    this->BlackboardKey = TEXT("MoveToLocation");
    this->BlackboardWaitTimeKey = TEXT("WaitTime");
    this->CurrentPoint = NULL;
}

