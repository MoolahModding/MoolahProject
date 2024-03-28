#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCUpdateScreenshotV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCUpdateScreenshotV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScreenshotId;
    
    FAccelByteModelsUGCUpdateScreenshotV2();
};

