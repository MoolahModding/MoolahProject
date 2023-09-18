#pragma once
#include "CoreMinimal.h"
#include "EAccelByteSeasonPassStrategyMethod.h"
#include "AccelByteSeasonPassExcessStrategy.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteSeasonPassExcessStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteSeasonPassStrategyMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentPerExp;
    
    FAccelByteSeasonPassExcessStrategy();
};

