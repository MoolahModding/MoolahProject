#include "SBZBTTask_AttackTarget.h"

USBZBTTask_AttackTarget::USBZBTTask_AttackTarget() {
    this->NodeName = TEXT("AttackTarget");
    this->AttackTime = 0.00f;
    this->RandomDeviation = 0.00f;
    this->AimTime = 0.00f;
    this->LOSLostAdditionalAimTime = 0.00f;
    this->bIsContinousFire = false;
    this->bShouldStopTelegraphOnAimingDone = false;
}


