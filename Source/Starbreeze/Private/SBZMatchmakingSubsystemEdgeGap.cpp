#include "SBZMatchmakingSubsystemEdgeGap.h"

USBZMatchmakingSubsystemEdgeGap::USBZMatchmakingSubsystemEdgeGap() {
    this->bInQueue = false;
    this->MatchmakerURL = TEXT("https://pd3-mm-4-74170c96f320d5.edgegap.net");
}

bool USBZMatchmakingSubsystemEdgeGap::StartMatchmaking(const FString& Map, const FString& DifficultyIdx) {
    return false;
}

bool USBZMatchmakingSubsystemEdgeGap::CancelMatchmaking() {
    return false;
}


