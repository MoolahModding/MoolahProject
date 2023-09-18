#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCPreview.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCPreview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Preview;
    
    FAccelByteModelsUGCPreview();
};

