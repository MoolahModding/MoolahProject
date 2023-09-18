#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCGetContentBulkRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCGetContentBulkRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ContentIds;
    
    FAccelByteModelsUGCGetContentBulkRequest();
};

