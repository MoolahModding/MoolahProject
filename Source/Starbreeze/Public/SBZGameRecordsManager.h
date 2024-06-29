#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZMetaEventType.h"
#include "SBZDifficultyConfiguration.h"
#include "SBZMatchmakingAndHostingData.h"
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

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZTitleData GetTitleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZNewsFeedList GetNewsFeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ESBZMetaEventType> GetMetaEventsDataRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZMetaEventData> GetMetaEventsData() const;
    
    UFUNCTION(BlueprintCallable)
    FSBZMatchmakingAndHostingData GetMatchmakingAndHostingData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZDifficultyConfiguration> GetDifficultyConfiguration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZGameRecordsManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void CacheNewsFeed(const FSBZNewsFeedList& inNewsFeed);
    
    UFUNCTION(BlueprintCallable)
    void CacheDifficultyConfiguration(const TArray<FSBZDifficultyConfiguration>& InConfiguration);
    
};

