#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCUploadScreenshotV2.h"
#include "AccelByteModelsUGCUploadScreenshotsRequestV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCUploadScreenshotsRequestV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUGCUploadScreenshotV2> Screenshots;
    
    FAccelByteModelsUGCUploadScreenshotsRequestV2();
};

