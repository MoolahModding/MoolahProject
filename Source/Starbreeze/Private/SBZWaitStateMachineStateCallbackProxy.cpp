#include "SBZWaitStateMachineStateCallbackProxy.h"

USBZWaitStateMachineStateCallbackProxy* USBZWaitStateMachineStateCallbackProxy::WaitGameStateMachineState(UObject* NewWorldContextObject, const TEnumAsByte<ESBZGameStateMachineState>& StateToWait) {
    return NULL;
}

void USBZWaitStateMachineStateCallbackProxy::HandleStateEntered(FName StateName) {
}

USBZWaitStateMachineStateCallbackProxy::USBZWaitStateMachineStateCallbackProxy() {
    this->WorldContextObject = NULL;
}

