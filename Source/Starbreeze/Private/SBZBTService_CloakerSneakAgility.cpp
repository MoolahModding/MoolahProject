#include "SBZBTService_CloakerSneakAgility.h"

USBZBTService_CloakerSneakAgility::USBZBTService_CloakerSneakAgility() {
    this->MaxDistanceToStartAgility = 600.00f;
    this->DistanceAcceptanceModifier = 50.00f;
    this->MaxAngleToStartAgility = 15.00f;
    this->NodeName = TEXT("CloakerSneakAgility");
}

void USBZBTService_CloakerSneakAgility::OnMontageEnded(UAnimMontage* Montage, bool bIsInterrupted, ASBZAIController* AIController) {
}


