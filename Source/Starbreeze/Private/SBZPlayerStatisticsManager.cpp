#include "SBZPlayerStatisticsManager.h"
#include "SBZPlayerStatisticsData.h"
#include "SBZServerStatBatcher.h"

USBZPlayerStatisticsManager::USBZPlayerStatisticsManager() {
    this->PlayerStatisticsData = CreateDefaultSubobject<USBZPlayerStatisticsData>(TEXT("SBZPlayerStatisticsData"));
    this->ServerStatBatcher = CreateDefaultSubobject<USBZServerStatBatcher>(TEXT("SBZServerStatBatcher"));
}

USBZPlayerStatisticsManager* USBZPlayerStatisticsManager::GetPlayerStatisticsManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FSBZLevelTimesStruct> USBZPlayerStatisticsManager::GetHeistBestTimes(FSoftObjectPath LevelPath) {
    return TArray<FSBZLevelTimesStruct>();
}


