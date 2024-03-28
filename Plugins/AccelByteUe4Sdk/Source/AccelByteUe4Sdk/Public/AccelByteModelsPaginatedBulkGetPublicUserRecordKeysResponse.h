#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetPublicUserRecordKeys.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsGetPublicUserRecordKeys> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse();
};

