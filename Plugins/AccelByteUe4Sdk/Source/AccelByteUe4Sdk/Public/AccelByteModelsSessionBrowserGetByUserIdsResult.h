#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserData.h"
#include "AccelByteModelsSessionBrowserGetByUserIdsResult.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSessionBrowserGetByUserIdsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsSessionBrowserData> Data;
    
    FAccelByteModelsSessionBrowserGetByUserIdsResult();
};

