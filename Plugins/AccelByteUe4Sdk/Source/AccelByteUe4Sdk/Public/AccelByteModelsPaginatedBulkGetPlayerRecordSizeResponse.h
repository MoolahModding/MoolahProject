#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlayerRecordSizeResponse.h"
#include "AccelByteModelsPaginatedBulkGetPlayerRecordSizeResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaginatedBulkGetPlayerRecordSizeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsPlayerRecordSizeResponse> Data;
    
    FAccelByteModelsPaginatedBulkGetPlayerRecordSizeResponse();
};

