#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlatformRewardCurrency.h"
#include "AccelByteModelsPlatformRewardItem.h"
#include "EAccelBytePlatformRewardType.h"
#include "AccelByteModelsPlatformReward.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPlatformReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelBytePlatformRewardType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPlatformRewardItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPlatformRewardCurrency Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FAccelByteModelsPlatformReward();
};

