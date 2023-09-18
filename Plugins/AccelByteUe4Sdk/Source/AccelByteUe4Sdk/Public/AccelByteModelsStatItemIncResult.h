#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsStatItemIncResult.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsStatItemIncResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float currentValue;
    
    FAccelByteModelsStatItemIncResult();
};

