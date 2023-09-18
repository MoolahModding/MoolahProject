#include "SBZBTDecorator_CloakerMelee.h"

USBZBTDecorator_CloakerMelee::USBZBTDecorator_CloakerMelee() {
    this->FilterClass = NULL;
    this->FilterClass = NULL;
    this->TriggerAcceptanceRadius = 300.00f;
    this->KickAcceptanceRadius2D = 50.00f;
    this->KickAcceptanceRadiusZ = 70.00f;
    this->AllowedDistanceFromPath = 50.00f;
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("CloakerMelee");
}


