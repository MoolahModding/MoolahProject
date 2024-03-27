#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsServerTimeoutResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsServerTimeoutResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Session_timeout;
    
    FAccelByteModelsServerTimeoutResponse();
};

