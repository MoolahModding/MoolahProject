#include "SBZStateMachineStateMatchmaking.h"

USBZStateMachineStateMatchmaking::USBZStateMachineStateMatchmaking() {
    this->AcceptMatchTimeMax = 30;
    this->AcceptMatchUnlockTimeDebug = 5;
    this->AcceptMatchUnlockTimeShipping = 60;
    this->AcceptMatchUnlockTimePrivateParty = 5;
    this->AcceptMatchUnlockTimeCamp = 5;
    this->MatchmakingData = NULL;
}

void USBZStateMachineStateMatchmaking::HandleSessionBecomeOutdated() {
}

void USBZStateMachineStateMatchmaking::HandlePlayerCountChanged() {
}

void USBZStateMachineStateMatchmaking::HandleMatchInfoUpdated() {
}

void USBZStateMachineStateMatchmaking::HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode) {
}

void USBZStateMachineStateMatchmaking::HandleLostConnectionToHost(ESBZOnlineCode ErrorCode) {
}

void USBZStateMachineStateMatchmaking::FireMatchAcceptUnlock() {
}


