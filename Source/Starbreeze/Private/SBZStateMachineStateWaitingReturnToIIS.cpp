#include "SBZStateMachineStateWaitingReturnToIIS.h"

USBZStateMachineStateWaitingReturnToIIS::USBZStateMachineStateWaitingReturnToIIS() {
    this->ReturnReason = NULL;
}

void USBZStateMachineStateWaitingReturnToIIS::HandlePostLoadMap(UWorld* NewWorld) {
}

void USBZStateMachineStateWaitingReturnToIIS::HandleP2PSessionDestroyed(FName SessionName, bool bResult) {
}


