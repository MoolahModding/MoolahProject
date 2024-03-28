#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZMetaEventType.h"
#include "SBZDifficultyConfiguration.h"
#include "SBZMetaEventData.h"
#include "SBZNewsFeedList.h"
#include "SBZTitleData.h"
#include "SBZGameRecordsManager.generated.h"

class USBZGameRecordsManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameRecordsManager : public UObject {
    GENERATED_BODY()
public:
    USBZGameRecordsManager();
    UFUNCTION(BlueprintPure)
    FSBZTitleData GetTitleData();
    
    UFUNCTION(BlueprintPure)
    FSBZNewsFeedList GetNewsFeed();
    
    UFUNCTION(BlueprintPure)
    TArray<ESBZMetaEventType> GetMetaEventsDataRunning() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZMetaEventData> GetMetaEventsData() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSBZDifficultyConfiguration> GetDifficultyConfiguration();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZGameRecordsManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void CacheNewsFeed(const FSBZNewsFeedList& inNewsFeed);
    
    UFUNCTION(BlueprintCallable)
    void CacheDifficultyConfiguration(const TArray<FSBZDifficultyConfiguration>& InConfiguration);
    
};

