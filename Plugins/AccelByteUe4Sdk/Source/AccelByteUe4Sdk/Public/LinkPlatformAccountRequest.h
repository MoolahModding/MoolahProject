#pragma once
#include "CoreMinimal.h"
#include "LinkPlatformAccountRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FLinkPlatformAccountRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformUserId;
    
    FLinkPlatformAccountRequest();
};

