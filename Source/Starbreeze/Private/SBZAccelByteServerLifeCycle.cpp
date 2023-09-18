#include "SBZAccelByteServerLifeCycle.h"

USBZAccelByteServerLifeCycle::USBZAccelByteServerLifeCycle() {
    this->ShutdownTimeDsLoading = 120.00f;
    this->ShutdownTimeDsWaitingForPlayers = 120.00f;
    this->ShutdownTimeDsWaitingForPlayersShort = 10.00f;
    this->ShutdownTimeDsActionPhase = 1.00f;
    this->ShutdownTimeDsResult = 1.00f;
}

void USBZAccelByteServerLifeCycle::OnNetDriverTearDown() {
}


