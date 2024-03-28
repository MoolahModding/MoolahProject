#include "SBZAIOrder_Sabotage.h"

USBZAIOrder_Sabotage::USBZAIOrder_Sabotage() {
    this->SabotageActor = NULL;
    this->BlackboardKey = TEXT("MoveToLocation");
    this->bDisableSabotageTargetOnFail = false;
}

