#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsQueryRewardPaging.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsQueryRewardPaging {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Next;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsQueryRewardPaging();
};

