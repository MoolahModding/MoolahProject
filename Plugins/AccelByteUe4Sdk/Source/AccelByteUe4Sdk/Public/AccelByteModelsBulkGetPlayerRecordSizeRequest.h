#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetPlayerRecordSizeRequest.h"
#include "AccelByteModelsBulkGetPlayerRecordSizeRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkGetPlayerRecordSizeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsGetPlayerRecordSizeRequest> Data;
    
    FAccelByteModelsBulkGetPlayerRecordSizeRequest();
};

