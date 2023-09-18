#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchingAlly.h"
#include "AccelByteModelsMatchingAllies.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMatchingAllies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsMatchingAlly> Data;
    
    FAccelByteModelsMatchingAllies();
};

