#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDistributionReceiver.h"
#include "ArrayModelsDistributionReceiver.generated.h"

USTRUCT(BlueprintType)
struct FArrayModelsDistributionReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsDistributionReceiver> Content;
    
    ACCELBYTEUE4SDK_API FArrayModelsDistributionReceiver();
};

