#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsEstimatedPrice.h"
#include "AccelByteModelsEstimatedPrices.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsEstimatedPrices {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsEstimatedPrice> EstimatedPrices;
    
    FAccelByteModelsEstimatedPrices();
};

