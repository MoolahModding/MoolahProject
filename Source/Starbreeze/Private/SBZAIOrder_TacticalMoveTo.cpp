#include "SBZAIOrder_TacticalMoveTo.h"

USBZAIOrder_TacticalMoveTo::USBZAIOrder_TacticalMoveTo() {
    this->Behaviors[0] = NULL;
    this->Behaviors[1] = NULL;
    this->Behaviors[2] = NULL;
    this->Behaviors[3] = NULL;
    this->Behaviors[4] = NULL;
    this->PreStateActions[0] = NULL;
    this->PreStateActions[1] = NULL;
    this->PreStateActions[2] = NULL;
    this->PreStateActions[3] = NULL;
    this->PreStateActions[4] = NULL;
    this->PrioWaitTime = 3.00f;
    this->TargetRoom = NULL;
    this->TargetEQSQuery = NULL;
    this->MaxNumTargetRoomPathFailed = 0;
}


