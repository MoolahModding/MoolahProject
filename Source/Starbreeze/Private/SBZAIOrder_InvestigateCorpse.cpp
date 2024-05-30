#include "SBZAIOrder_InvestigateCorpse.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_InvestigateCorpse::USBZAIOrder_InvestigateCorpse() {
    this->Category = ESBZAIBehaviorCategory::Combat;
    this->BlackboardKey = TEXT("MoveToLocation");
}


