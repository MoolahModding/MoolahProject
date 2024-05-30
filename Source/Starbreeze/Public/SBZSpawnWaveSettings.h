#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZSpawnWaveSegmentSettings.h"
#include "SBZSpawnWaveSquadOrderLimits.h"
#include "SBZSpawnWaveSettings.generated.h"

class USBZAISquadOrder;

USTRUCT(BlueprintType)
struct FSBZSpawnWaveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> TypeLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<USBZAISquadOrder>, FSBZSpawnWaveSquadOrderLimits> AllSquadOrderLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpawnWaveSegmentSettings> AllWaveSegmentSettings;
    
    STARBREEZE_API FSBZSpawnWaveSettings();
};

