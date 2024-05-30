#include "SBZAIOrder_Revive.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_Revive::USBZAIOrder_Revive() {
    this->Category = ESBZAIBehaviorCategory::Combat;
    this->bCompleteOnStop = true;
    this->BlackboardKey = TEXT("Target");
    this->CivilianBehavior = NULL;
}


