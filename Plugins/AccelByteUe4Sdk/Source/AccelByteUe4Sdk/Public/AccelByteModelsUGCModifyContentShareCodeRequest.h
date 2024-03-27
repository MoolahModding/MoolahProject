#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCModifyContentShareCodeRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCModifyContentShareCodeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShareCode;
    
    FAccelByteModelsUGCModifyContentShareCodeRequest();
};

