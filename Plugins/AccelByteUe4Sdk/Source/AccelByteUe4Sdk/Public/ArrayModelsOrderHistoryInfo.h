#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsOrderHistoryInfo.h"
#include "ArrayModelsOrderHistoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FArrayModelsOrderHistoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsOrderHistoryInfo> Content;
    
    ACCELBYTEUE4SDK_API FArrayModelsOrderHistoryInfo();
};

