#include "SBZBTDecorator_CloakerMelee.h"

USBZBTDecorator_CloakerMelee::USBZBTDecorator_CloakerMelee() {
    this->NodeName = TEXT("CloakerMelee");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->FilterClass = NULL;
    this->TriggerAcceptanceRadius = 300.00f;
    this->KickAcceptanceRadius2D = 50.00f;
    this->KickAcceptanceRadiusZ = 70.00f;
}


