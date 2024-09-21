#include "SBZAIOrder_Sabotage.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_Sabotage::USBZAIOrder_Sabotage() {
    this->bIsPersistent = true;
    this->Category = ESBZAIBehaviorCategory::Combat;
    this->SabotageActor = NULL;
    this->BlackboardKey = TEXT("MoveToLocation");
    this->bDisableSabotageTargetOnFail = false;
}


