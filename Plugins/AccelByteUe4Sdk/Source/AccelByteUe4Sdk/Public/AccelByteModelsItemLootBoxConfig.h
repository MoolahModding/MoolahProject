#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemReward.h"
#include "AccelByteModelsItemLootBoxConfig.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsItemLootBoxConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsItemReward> Rewards;
    
    FAccelByteModelsItemLootBoxConfig();
};

