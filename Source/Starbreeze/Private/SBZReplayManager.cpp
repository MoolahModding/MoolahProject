#include "SBZReplayManager.h"

bool USBZReplayManager::IsRecording() const {
    return false;
}

bool USBZReplayManager::IsPlaying() const {
    return false;
}

USBZReplayManager* USBZReplayManager::GetReplayManager(const UObject* WorldContextObject) {
    return NULL;
}

void USBZReplayManager::FindReplays() {
}

void USBZReplayManager::DeleteReplay(const FString& ReplayName) {
}

USBZReplayManager::USBZReplayManager() {
    this->GameInstance = NULL;
    this->ReplayFilePlayer = NULL;
    this->ReplayFileRecorder = NULL;
}

