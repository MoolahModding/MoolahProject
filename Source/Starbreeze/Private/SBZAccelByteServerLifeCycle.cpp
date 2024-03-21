#include "SBZAccelByteServerLifeCycle.h"

void USBZAccelByteServerLifeCycle::OnNetDriverTearDown() {
}

USBZAccelByteServerLifeCycle::USBZAccelByteServerLifeCycle() {
    this->StateMachine = NULL;
    this->AccelByteDs = NULL;
    this->ShutdownTimeDsLoading = 120.00f;
    this->ShutdownTimeDsWaitingForPlayers = 120.00f;
    this->ShutdownTimeDsWaitingForPlayersShort = 10.00f;
    this->ShutdownTimeDsActionPhase = 1.00f;
    this->ShutdownTimeDsResult = 1.00f;
}

