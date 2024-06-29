#include "SBZVotingManager.h"

USBZVotingManager::USBZVotingManager() {
    this->ReplicatedProxy = NULL;
    this->CurrentVote = NULL;
}

void USBZVotingManager::HandlePlayableLevelInitialized(UWorld* World) {
}


