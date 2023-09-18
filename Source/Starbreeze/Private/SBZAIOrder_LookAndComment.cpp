#include "SBZAIOrder_LookAndComment.h"
#include "ESBZAIBehaviorCategory.h"
#include "ESBZAIOrderMode.h"

USBZAIOrder_LookAndComment::USBZAIOrder_LookAndComment() {
    this->VoiceComment = NULL;
    this->bUseTargetActorLocation = false;
    this->Mode = ESBZAIOrderMode::Instant;
    this->Category = ESBZAIBehaviorCategory::Idle;
    this->bCompleteOnStop = true;
}


