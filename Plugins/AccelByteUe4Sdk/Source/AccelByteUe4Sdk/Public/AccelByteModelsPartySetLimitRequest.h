#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartySetLimitRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPartySetLimitRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Limit;
    
    FAccelByteModelsPartySetLimitRequest();
};

