#include "SBZVolumeManager.h"

USBZVolumeManager::USBZVolumeManager() {
    this->PauseEvent = NULL;
    this->ResumeEvent = NULL;
}

USBZVolumeManager* USBZVolumeManager::GetVolumeManager(UObject* WorldContextObject) {
    return NULL;
}

float USBZVolumeManager::GetRelativeCinematicVolume() {
    return 0.0f;
}


