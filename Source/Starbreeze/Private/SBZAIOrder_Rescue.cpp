#include "SBZAIOrder_Rescue.h"

USBZAIOrder_Rescue::USBZAIOrder_Rescue() {
    this->RescueHostageComment = NULL;
    this->RescueTargetOutline = NULL;
}

void USBZAIOrder_Rescue::OnTargetKilled(APawn* KilledPawn) {
}

void USBZAIOrder_Rescue::OnTargetHostageStateChanged(uint8 NewHostageState) {
}


