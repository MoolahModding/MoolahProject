#include "SBZWaitStateMachineStateChangeCallbackProxy.h"

USBZWaitStateMachineStateChangeCallbackProxy* USBZWaitStateMachineStateChangeCallbackProxy::WaitGameStateMachineStateChange(UObject* NewWorldContextObject) {
    return NULL;
}

void USBZWaitStateMachineStateChangeCallbackProxy::HandleStateEntered(FName StateName) {
}

USBZWaitStateMachineStateChangeCallbackProxy::USBZWaitStateMachineStateChangeCallbackProxy() {
    this->WorldContextObject = NULL;
}

