#include "SBZAIOrder_FollowShield.h"
#include "ESBZAIBehaviorCategory.h"

USBZAIOrder_FollowShield::USBZAIOrder_FollowShield() {
    this->AvoidanceOverride = 80.00f;
    this->FrictionOverride = 9.00f;
    this->Category = ESBZAIBehaviorCategory::Combat;
}


