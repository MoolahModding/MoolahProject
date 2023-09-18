#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDequeueRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDequeueRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Match_id;
    
    FAccelByteModelsDequeueRequest();
};

