#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserCurrentPlatform.h"
#include "AccelByteModelsBulkUserCurrentPlatformResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkUserCurrentPlatformResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUserCurrentPlatform> Data;
    
    FAccelByteModelsBulkUserCurrentPlatformResponse();
};

