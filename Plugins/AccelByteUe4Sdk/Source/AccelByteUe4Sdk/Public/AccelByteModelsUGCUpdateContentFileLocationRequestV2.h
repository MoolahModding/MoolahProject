#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCUpdateContentFileLocationRequestV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCUpdateContentFileLocationRequestV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileLocation;
    
    FAccelByteModelsUGCUpdateContentFileLocationRequestV2();
};

