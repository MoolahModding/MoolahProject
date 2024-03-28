#include "SBZStateMachineStateWaitingReturnToIIS.h"

void USBZStateMachineStateWaitingReturnToIIS::HandlePostLoadMap(UWorld* NewWorld) {
}

void USBZStateMachineStateWaitingReturnToIIS::HandleP2PSessionDestroyed(FName SessionName, bool bResult) {
}

USBZStateMachineStateWaitingReturnToIIS::USBZStateMachineStateWaitingReturnToIIS() {
    this->ReturnReason = NULL;
}

