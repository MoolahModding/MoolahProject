#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2SessionInvitePlatformResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2SessionInvitePlatformResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformUserID;
    
    FAccelByteModelsV2SessionInvitePlatformResponse();
};

