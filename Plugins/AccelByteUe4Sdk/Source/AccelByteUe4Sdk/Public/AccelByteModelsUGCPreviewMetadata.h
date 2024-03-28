#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCPreviewMetadata.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCPreviewMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviewContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviewFileExtension;
    
    FAccelByteModelsUGCPreviewMetadata();
};

