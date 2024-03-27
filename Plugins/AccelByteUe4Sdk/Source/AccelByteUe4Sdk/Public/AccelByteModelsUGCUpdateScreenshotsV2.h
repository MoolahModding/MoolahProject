#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCUpdateScreenshotV2.h"
#include "AccelByteModelsUGCUpdateScreenshotsV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCUpdateScreenshotsV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUGCUpdateScreenshotV2> Screenshots;
    
    FAccelByteModelsUGCUpdateScreenshotsV2();
};

