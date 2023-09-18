#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemInfoV2.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsItemPagingSlicedResultV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsItemPagingSlicedResultV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsItemInfoV2> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsItemPagingSlicedResultV2();
};

