#include "SBZAIOrder_Escalate.h"

USBZAIOrder_Escalate::USBZAIOrder_Escalate() {
    this->DispatcherReason = EPD3DispatchCallerReason::None;
    this->DefaultReason = NULL;
    this->TimeToEscalate = 3.00f;
    this->EscalationReason = NULL;
}

void USBZAIOrder_Escalate::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}


