#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlayStationDLCSync.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPlayStationDLCSync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServiceLabel;
    
    FAccelByteModelsPlayStationDLCSync();
};

