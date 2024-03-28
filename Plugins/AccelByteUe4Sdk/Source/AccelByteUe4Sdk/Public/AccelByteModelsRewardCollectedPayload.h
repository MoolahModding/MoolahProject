#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGameStandardEvent.h"
#include "AccelByteModelsRewardCollectedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsRewardCollectedPayload : public FAccelByteModelsGameStandardEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardAmount;
    
    FAccelByteModelsRewardCollectedPayload();
};

