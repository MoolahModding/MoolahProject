#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLoginFailedPayload.h"
#include "AccelByteModelsLoginSuccededPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsLoginSuccededPayload : public FAccelByteModelsLoginFailedPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceId;
    
    FAccelByteModelsLoginSuccededPayload();
};

