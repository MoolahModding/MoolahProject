#include "SBZWaitStateMachineStateCallbackProxy.h"

USBZWaitStateMachineStateCallbackProxy::USBZWaitStateMachineStateCallbackProxy() {
    this->WorldContextObject = NULL;
}

USBZWaitStateMachineStateCallbackProxy* USBZWaitStateMachineStateCallbackProxy::WaitGameStateMachineState(UObject* NewWorldContextObject, const TEnumAsByte<ESBZGameStateMachineState>& StateToWait) {
    return NULL;
}

void USBZWaitStateMachineStateCallbackProxy::HandleStateEntered(FName StateName) {
}


