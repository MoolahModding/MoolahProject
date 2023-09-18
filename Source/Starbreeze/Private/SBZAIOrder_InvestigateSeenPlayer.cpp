#include "SBZAIOrder_InvestigateSeenPlayer.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_InvestigateSeenPlayer::USBZAIOrder_InvestigateSeenPlayer() {
    this->BlackboardKey = TEXT("MoveToLocation");
    this->WaitTimeOnArrival = 10.00f;
    this->Category = ESBZAIBehaviorCategory::Suspiscious;
}


