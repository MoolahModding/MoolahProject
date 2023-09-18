#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAttributes.h"
#include "AccelByteModelsDistributionAttributes.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDistributionAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsAttributes Attributes;
    
    FAccelByteModelsDistributionAttributes();
};

