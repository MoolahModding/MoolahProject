#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsOrderInfo.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsPagedOrderInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPagedOrderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsOrderInfo> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsPagedOrderInfo();
};

