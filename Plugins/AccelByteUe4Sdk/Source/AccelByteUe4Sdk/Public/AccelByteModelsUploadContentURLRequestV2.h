#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUploadContentURLRequestV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUploadContentURLRequestV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileExtension;
    
    FAccelByteModelsUploadContentURLRequestV2();
};

