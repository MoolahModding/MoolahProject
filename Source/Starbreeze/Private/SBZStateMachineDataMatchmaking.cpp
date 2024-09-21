#include "SBZStateMachineDataMatchmaking.h"

USBZStateMachineDataMatchmaking::USBZStateMachineDataMatchmaking() {
    this->bAsyncLoadingComplete = false;
    this->bCrossPlayEnabled = true;
    this->bInCrossPlayLobby = false;
    this->bCrossPlayAllowed = true;
    this->JoinType = ESBZOnlineJoinType::Debug;
}


