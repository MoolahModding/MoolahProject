#include "SBZStateMachineStateSoloPreMatch.h"

USBZStateMachineStateSoloPreMatch::USBZStateMachineStateSoloPreMatch() {
    this->MatchmakingData = NULL;
    this->LoadingScreen = NULL;
}

bool USBZStateMachineStateSoloPreMatch::SetPlayerReady() {
    return false;
}

void USBZStateMachineStateSoloPreMatch::OnPlayerReady() {
}

void USBZStateMachineStateSoloPreMatch::OnLocalPlayerLoadoutChanged(const FSBZPlayerLoadoutConfig& PlayerLoadout, int32 PlayerLoadoutIndex) {
}

void USBZStateMachineStateSoloPreMatch::OnActiveLoadoutIndexChanged(int32 NewActiveLoadoutIndex) {
}


