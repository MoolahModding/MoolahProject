#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCUpdateLikeStatusToContentResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCUpdateLikeStatusToContentResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LikeStatus;
    
    FAccelByteModelsUGCUpdateLikeStatusToContentResponse();
};

