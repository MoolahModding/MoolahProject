#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZLevelTimesStruct.h"
#include "SBZPlayerStatisticsManagerInterface.h"
#include "SBZPlayerStatisticsManager.generated.h"

class USBZPlayerStatisticsData;
class USBZPlayerStatisticsManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerStatisticsManager : public UObject, public ISBZPlayerStatisticsManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerStatisticsData* PlayerStatisticsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, USBZPlayerStatisticsData*> ServerPlayerStatisticsData;
    
public:
    USBZPlayerStatisticsManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZPlayerStatisticsManager* GetPlayerStatisticsManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZLevelTimesStruct> GetHeistBestTimes(FSoftObjectPath LevelPath);
    

    // Fix for true pure virtual functions not being implemented
};

