#include "SBZReplayBaseWidget.h"

USBZReplayBaseWidget::USBZReplayBaseWidget() {
    this->PlayerController = NULL;
    this->ReplaySpeed = 1.00f;
    this->GameInstance = NULL;
    this->ReplayFilePlayer = NULL;
}

bool USBZReplayBaseWidget::StopReplay() {
    return false;
}

bool USBZReplayBaseWidget::StartReplay() {
    return false;
}

void USBZReplayBaseWidget::SetElapasedTimeSeconds(float ElapsedTime) {
}

void USBZReplayBaseWidget::ScrubForward() {
}

void USBZReplayBaseWidget::ScrubBackward() {
}

bool USBZReplayBaseWidget::ResumeReplay() {
    return false;
}

void USBZReplayBaseWidget::Quit() {
}

bool USBZReplayBaseWidget::PauseReplay() {
    return false;
}


void USBZReplayBaseWidget::OnReplayTimerUpdate() {
}

void USBZReplayBaseWidget::OnReplayStopped() {
}

void USBZReplayBaseWidget::OnReplayStarted(FSBZReplayInfo InReplayInfo) {
}


bool USBZReplayBaseWidget::IsPaused() const {
    return false;
}

void USBZReplayBaseWidget::IncreaseReplaySpeed() {
}

float USBZReplayBaseWidget::GetReplayLengthSeconds() const {
    return 0.0f;
}

float USBZReplayBaseWidget::GetElapsedTimeSeconds() const {
    return 0.0f;
}

void USBZReplayBaseWidget::DecreaseReplaySpeed() {
}

void USBZReplayBaseWidget::CycleNextPlayerView() {
}

void USBZReplayBaseWidget::CycleNextCameraView() {
}


