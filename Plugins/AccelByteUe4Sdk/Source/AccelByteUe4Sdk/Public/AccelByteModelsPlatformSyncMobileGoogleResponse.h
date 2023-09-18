#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlatformSyncMobileGoogleResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPlatformSyncMobileGoogleResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedConsume;
    
    FAccelByteModelsPlatformSyncMobileGoogleResponse();
};

