#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelScreenshots.h"
#include "AccelByteModelsUGCGetFollowedContentResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCGetFollowedContentResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelScreenshots> Screenshots;
    
    FAccelByteModelsUGCGetFollowedContentResponse();
};

