#include "SBZStateMachineStateDsLoading.h"

USBZStateMachineStateDsLoading::USBZStateMachineStateDsLoading() {
    this->TimeOutAck = 15.00f;
    this->DSChallengeManager = NULL;
    this->MetaDataLoader = NULL;
}

void USBZStateMachineStateDsLoading::DestinationMapLoaded(UWorld* NewWorld) {
}


