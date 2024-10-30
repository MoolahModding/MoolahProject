#include "SBZVolumeManager.h"

USBZVolumeManager::USBZVolumeManager() {
    this->PauseEvent = NULL;
    this->ResumeEvent = NULL;
}

void USBZVolumeManager::UpdateVOIPVolumeOnEOSLogin(int32 InUserIndex, const FString& NativePlatformUserId, const FString& EOSPlatformProductUserId, bool bLoginSuccess) {
}

USBZVolumeManager* USBZVolumeManager::GetVolumeManager(UObject* WorldContextObject) {
    return NULL;
}

float USBZVolumeManager::GetRelativeCinematicVolume() {
    return 0.0f;
}


