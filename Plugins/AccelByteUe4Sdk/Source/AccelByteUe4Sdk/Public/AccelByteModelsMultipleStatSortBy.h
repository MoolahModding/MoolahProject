#pragma once
#include "CoreMinimal.h"
#include "EAccelByteStatisticSortBy.h"
#include "AccelByteModelsMultipleStatSortBy.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsMultipleStatSortBy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAccelByteStatisticSortBy> SortBy;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsMultipleStatSortBy();
};

