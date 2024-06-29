#include "SBZStateMachineStateSoloPreMatch.h"

USBZStateMachineStateSoloPreMatch::USBZStateMachineStateSoloPreMatch() {
    this->MatchmakingData = NULL;
}

bool USBZStateMachineStateSoloPreMatch::SetPlayerReady() {
    return false;
}

void USBZStateMachineStateSoloPreMatch::OnPlayerReady() {
}

void USBZStateMachineStateSoloPreMatch::OnActiveLoadoutChanged(int32 NewActiveLoadoutIndex) {
}


