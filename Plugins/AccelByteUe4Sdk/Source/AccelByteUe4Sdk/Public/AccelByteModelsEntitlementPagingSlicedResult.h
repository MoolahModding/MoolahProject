#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsEntitlementInfo.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsEntitlementPagingSlicedResult.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsEntitlementPagingSlicedResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsEntitlementInfo> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsEntitlementPagingSlicedResult();
};

