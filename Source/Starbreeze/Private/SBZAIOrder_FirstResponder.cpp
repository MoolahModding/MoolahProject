#include "SBZAIOrder_FirstResponder.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_FirstResponder::USBZAIOrder_FirstResponder() {
    this->Category = ESBZAIBehaviorCategory::Combat;
}

void USBZAIOrder_FirstResponder::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void USBZAIOrder_FirstResponder::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}


