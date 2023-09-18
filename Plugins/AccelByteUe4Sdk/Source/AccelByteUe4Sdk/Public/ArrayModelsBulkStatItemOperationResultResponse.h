#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkStatItemOperationResult.h"
#include "ArrayModelsBulkStatItemOperationResultResponse.generated.h"

USTRUCT(BlueprintType)
struct FArrayModelsBulkStatItemOperationResultResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsBulkStatItemOperationResult> Content;
    
    ACCELBYTEUE4SDK_API FArrayModelsBulkStatItemOperationResultResponse();
};

