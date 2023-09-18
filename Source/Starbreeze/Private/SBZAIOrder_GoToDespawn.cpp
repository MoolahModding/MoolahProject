#include "SBZAIOrder_GoToDespawn.h"
#include "ESBZAIBehaviorCategory.h"
#include "ESBZAIOrderMode.h"

USBZAIOrder_GoToDespawn::USBZAIOrder_GoToDespawn() {
    this->Mode = ESBZAIOrderMode::Instant;
    this->Category = ESBZAIBehaviorCategory::Idle;
    this->bCompleteOnStop = true;
}


