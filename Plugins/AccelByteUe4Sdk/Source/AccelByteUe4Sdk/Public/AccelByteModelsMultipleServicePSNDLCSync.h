#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMultipleServicePSNDLCSync.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMultipleServicePSNDLCSync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ServiceLabel;
    
    FAccelByteModelsMultipleServicePSNDLCSync();
};

