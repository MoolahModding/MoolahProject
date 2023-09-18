#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelScreenshots.h"
#include "AccelByteModelsUGCUpdateContentScreenshotResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCUpdateContentScreenshotResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelScreenshots> Screenshots;
    
    FAccelByteModelsUGCUpdateContentScreenshotResponse();
};

