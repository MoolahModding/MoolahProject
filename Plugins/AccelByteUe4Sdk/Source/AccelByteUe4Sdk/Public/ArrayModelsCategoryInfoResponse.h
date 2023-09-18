#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCategoryInfo.h"
#include "ArrayModelsCategoryInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct FArrayModelsCategoryInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsCategoryInfo> Content;
    
    ACCELBYTEUE4SDK_API FArrayModelsCategoryInfoResponse();
};

