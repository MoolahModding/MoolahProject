#include "SBZAIOrder_InvestigateCorpse.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_InvestigateCorpse::USBZAIOrder_InvestigateCorpse() {
    this->BlackboardKey = TEXT("MoveToLocation");
    this->Category = ESBZAIBehaviorCategory::Combat;
}


