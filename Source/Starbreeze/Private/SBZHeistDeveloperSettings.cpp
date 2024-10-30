#include "SBZHeistDeveloperSettings.h"

USBZHeistDeveloperSettings::USBZHeistDeveloperSettings() {
    this->HeistLevelPairArray.AddDefaulted(19);
}

UPD3HeistDataAsset* USBZHeistDeveloperSettings::GetHeistDataFromLevelShortName(const FString& ShortName) {
    return NULL;
}

UPD3HeistDataAsset* USBZHeistDeveloperSettings::GetHeistDataFromLevelPath(FSoftObjectPath LevelPath) {
    return NULL;
}

TArray<FSBZHeistDataLevelPair> USBZHeistDeveloperSettings::GetAllHeistData() {
    return TArray<FSBZHeistDataLevelPair>();
}


