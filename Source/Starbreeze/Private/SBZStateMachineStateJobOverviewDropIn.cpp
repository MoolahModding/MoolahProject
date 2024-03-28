#include "SBZStateMachineStateJobOverviewDropIn.h"

void USBZStateMachineStateJobOverviewDropIn::OnHandleBeginPlayState(ASBZPlayerController* PlayerController) {
}

void USBZStateMachineStateJobOverviewDropIn::NetworkDisconnected() {
}

void USBZStateMachineStateJobOverviewDropIn::EnableReadyButton() {
}

void USBZStateMachineStateJobOverviewDropIn::ClientShowBlackScreen(EBlackScreenTransitionType BlackScreenTransitionType) {
}

USBZStateMachineStateJobOverviewDropIn::USBZStateMachineStateJobOverviewDropIn() {
    this->JobOverviewWidget = NULL;
    this->MissionState = NULL;
}

