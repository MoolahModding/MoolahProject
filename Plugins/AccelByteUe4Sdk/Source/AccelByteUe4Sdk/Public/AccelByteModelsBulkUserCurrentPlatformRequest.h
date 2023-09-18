#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkUserCurrentPlatformRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkUserCurrentPlatformRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> userIDs;
    
    FAccelByteModelsBulkUserCurrentPlatformRequest();
};

