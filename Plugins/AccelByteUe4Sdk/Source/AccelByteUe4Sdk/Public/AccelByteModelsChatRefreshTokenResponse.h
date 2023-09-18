#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatRefreshTokenResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatRefreshTokenResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    FAccelByteModelsChatRefreshTokenResponse();
};

