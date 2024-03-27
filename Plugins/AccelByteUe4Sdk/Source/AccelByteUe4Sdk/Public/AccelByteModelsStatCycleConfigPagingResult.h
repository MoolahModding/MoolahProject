#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsStatCycleConfig.h"
#include "AccelByteModelsStatCycleConfigPagingResult.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsStatCycleConfigPagingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsStatCycleConfig> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsStatCycleConfigPagingResult();
};

