#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCScreenshot.h"
#include "AccelByteModelsUGCScreenshotsRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCScreenshotsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUGCScreenshot> Screenshots;
    
    FAccelByteModelsUGCScreenshotsRequest();
};

