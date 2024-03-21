#include "SBZGameRecordsManager.h"

FSBZTitleData USBZGameRecordsManager::GetTitleData() {
    return FSBZTitleData{};
}

FSBZNewsFeedList USBZGameRecordsManager::GetNewsFeed() {
    return FSBZNewsFeedList{};
}

TArray<FSBZMetaEventData> USBZGameRecordsManager::GetMetaEventsData() const {
    return TArray<FSBZMetaEventData>();
}

TArray<FSBZDifficultyConfiguration> USBZGameRecordsManager::GetDifficultyConfiguration() {
    return TArray<FSBZDifficultyConfiguration>();
}

USBZGameRecordsManager* USBZGameRecordsManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

void USBZGameRecordsManager::CacheNewsFeed(const FSBZNewsFeedList& inNewsFeed) {
}

void USBZGameRecordsManager::CacheDifficultyConfiguration(const TArray<FSBZDifficultyConfiguration>& InConfiguration) {
}

USBZGameRecordsManager::USBZGameRecordsManager() {
}

