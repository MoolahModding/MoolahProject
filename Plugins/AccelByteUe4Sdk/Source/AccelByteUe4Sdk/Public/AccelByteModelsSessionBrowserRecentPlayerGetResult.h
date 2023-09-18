#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserRecentPlayerData.h"
#include "AccelByteModelsSessionBrowserRecentPlayerGetResult.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSessionBrowserRecentPlayerGetResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsSessionBrowserRecentPlayerData> Data;
    
    FAccelByteModelsSessionBrowserRecentPlayerGetResult();
};

