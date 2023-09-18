#pragma once
#include "CoreMinimal.h"
#include "SetRetryParametersRequest.generated.h"

USTRUCT(BlueprintType)
struct FSetRetryParametersRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewTotalTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewBackoffDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewMaxDelay;
    
    ACCELBYTEUE4SDK_API FSetRetryParametersRequest();
};

