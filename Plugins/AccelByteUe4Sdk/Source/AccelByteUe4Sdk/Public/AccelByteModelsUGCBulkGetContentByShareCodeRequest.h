#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCBulkGetContentByShareCodeRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCBulkGetContentByShareCodeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ShareCodes;
    
    FAccelByteModelsUGCBulkGetContentByShareCodeRequest();
};

