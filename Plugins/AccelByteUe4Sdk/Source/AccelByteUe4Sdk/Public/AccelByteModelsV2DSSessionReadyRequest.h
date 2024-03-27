#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2DSSessionReadyRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2DSSessionReadyRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ready;
    
    FAccelByteModelsV2DSSessionReadyRequest();
};

