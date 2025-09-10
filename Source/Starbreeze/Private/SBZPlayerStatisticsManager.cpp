#include "SBZPlayerStatisticsManager.h"
#include "SBZServerStatBatcher.h"

USBZPlayerStatisticsManager::USBZPlayerStatisticsManager() {
    this->ServerStatBatcher = CreateDefaultSubobject<USBZServerStatBatcher>(TEXT("SBZServerStatBatcher"));
}

USBZPlayerStatisticsManager* USBZPlayerStatisticsManager::GetPlayerStatisticsManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FSBZLevelTimesStruct> USBZPlayerStatisticsManager::GetHeistBestTimes(FSoftObjectPath LevelPath) {
    return TArray<FSBZLevelTimesStruct>();
}


