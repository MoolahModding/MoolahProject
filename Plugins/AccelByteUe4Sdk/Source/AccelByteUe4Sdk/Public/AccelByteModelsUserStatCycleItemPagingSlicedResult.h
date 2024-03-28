#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsUserStatCycleItemInfo.h"
#include "AccelByteModelsUserStatCycleItemPagingSlicedResult.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserStatCycleItemPagingSlicedResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUserStatCycleItemInfo> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsUserStatCycleItemPagingSlicedResult();
};

