#pragma once
#include "CoreMinimal.h"
#include "AccelByteGetLowestPodSpecResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FAccelByteGetLowestPodSpecResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cpu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mem;
    
    FAccelByteGetLowestPodSpecResponse();
};

