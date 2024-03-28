#include "SBZAIOrder_Rescue.h"

void USBZAIOrder_Rescue::OnTargetKilled(APawn* KilledPawn) {
}

void USBZAIOrder_Rescue::OnTargetHostageStateChanged(uint8 NewHostageState) {
}

USBZAIOrder_Rescue::USBZAIOrder_Rescue() {
    this->RescueHostageComment = NULL;
    this->RescueTargetOutline = NULL;
}

