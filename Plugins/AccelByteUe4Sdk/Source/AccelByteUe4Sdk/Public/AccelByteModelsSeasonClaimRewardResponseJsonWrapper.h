#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsSeasonClaimRewardResponseJsonWrapper.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSeasonClaimRewardResponseJsonWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FJsonObjectWrapper> ToClaimRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FJsonObjectWrapper> ClaimingRewards;
    
    FAccelByteModelsSeasonClaimRewardResponseJsonWrapper();
};

