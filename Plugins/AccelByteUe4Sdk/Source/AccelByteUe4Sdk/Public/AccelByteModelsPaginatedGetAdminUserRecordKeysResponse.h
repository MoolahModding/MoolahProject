#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGetAdminUserRecordKeys.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsPaginatedGetAdminUserRecordKeysResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaginatedGetAdminUserRecordKeysResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsGetAdminUserRecordKeys> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsPaginatedGetAdminUserRecordKeysResponse();
};

