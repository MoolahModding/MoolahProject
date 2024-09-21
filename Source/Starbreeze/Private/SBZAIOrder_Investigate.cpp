#include "SBZAIOrder_Investigate.h"
#include "ESBZAIBehaviorCategory.h"
#include "ESBZAIOrderMode.h"

USBZAIOrder_Investigate::USBZAIOrder_Investigate() {
    this->Mode = ESBZAIOrderMode::Instant;
    this->Category = ESBZAIBehaviorCategory::Suspiscious;
    this->StateBehaviors[0] = NULL;
    this->StateBehaviors[1] = NULL;
    this->StateBehaviors[2] = NULL;
    this->StateBehaviors[3] = NULL;
    this->EscalateActionOrder = NULL;
    this->EscalationReason = NULL;
}


