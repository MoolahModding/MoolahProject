#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsUGCContentResponseV2.h"
#include "AccelByteModelsUGCSearchContentsPagingResponseV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCSearchContentsPagingResponseV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUGCContentResponseV2> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsUGCSearchContentsPagingResponseV2();
};

