#include "SBZStateMachineStateOutro.h"

void USBZStateMachineStateOutro::OutroSequenceTimeout() {
}

void USBZStateMachineStateOutro::HandleMissionResultReady(const FSBZEndMissionResultData& MissionResultData) {
}

void USBZStateMachineStateOutro::DelayedLeaveOutroSequence() {
}

USBZStateMachineStateOutro::USBZStateMachineStateOutro() {
    this->ResultData = NULL;
    this->WaitingForEndResult = false;
}

