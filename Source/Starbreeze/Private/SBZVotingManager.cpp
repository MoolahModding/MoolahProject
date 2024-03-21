#include "SBZVotingManager.h"

void USBZVotingManager::HandlePlayableLevelInitialized(UWorld* World) {
}

USBZVotingManager::USBZVotingManager() {
    this->ReplicatedProxy = NULL;
    this->CurrentVote = NULL;
}

