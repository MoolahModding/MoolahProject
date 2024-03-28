#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCAddDownloadContentCountResponseV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCAddDownloadContentCountResponseV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentId;
    
    FAccelByteModelsUGCAddDownloadContentCountResponseV2();
};

