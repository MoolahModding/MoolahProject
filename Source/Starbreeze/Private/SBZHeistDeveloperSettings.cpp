#include "SBZHeistDeveloperSettings.h"

UPD3HeistDataAsset* USBZHeistDeveloperSettings::GetHeistDataFromLevelShortName(const FString& ShortName) {
    return NULL;
}

UPD3HeistDataAsset* USBZHeistDeveloperSettings::GetHeistDataFromLevelPath(FSoftObjectPath LevelPath) {
    return NULL;
}

TArray<FSBZHeistDataLevelPair> USBZHeistDeveloperSettings::GetAllHeistData() {
    return TArray<FSBZHeistDataLevelPair>();
}

USBZHeistDeveloperSettings::USBZHeistDeveloperSettings() {
    this->HeistLevelPairArray.AddDefaulted(18);
}

