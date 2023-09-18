#include "SBZPlayerStatisticsManager.h"
#include "SBZPlayerStatisticsData.h"

USBZPlayerStatisticsManager::USBZPlayerStatisticsManager() {
    this->PlayerStatisticsData = CreateDefaultSubobject<USBZPlayerStatisticsData>(TEXT("SBZPlayerStatisticsData"));
}

USBZPlayerStatisticsManager* USBZPlayerStatisticsManager::GetPlayerStatisticsManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FSBZLevelTimesStruct> USBZPlayerStatisticsManager::GetHeistBestTimes(FSoftObjectPath LevelPath) {
    return TArray<FSBZLevelTimesStruct>();
}


