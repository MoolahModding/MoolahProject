#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRematchmakingNotice.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsRematchmakingNotice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BanDuration;
    
    FAccelByteModelsRematchmakingNotice();
};

