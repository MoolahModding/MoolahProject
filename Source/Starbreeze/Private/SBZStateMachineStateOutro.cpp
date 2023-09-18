#include "SBZStateMachineStateOutro.h"

USBZStateMachineStateOutro::USBZStateMachineStateOutro() {
    this->ResultData = NULL;
    this->WaitingForEndResult = false;
}

void USBZStateMachineStateOutro::OutroSequenceTimeout() {
}

void USBZStateMachineStateOutro::HandleMissionResultReady(const FSBZEndMissionResultData& MissionResultData) {
}

void USBZStateMachineStateOutro::DelayedLeaveOutroSequence() {
}


