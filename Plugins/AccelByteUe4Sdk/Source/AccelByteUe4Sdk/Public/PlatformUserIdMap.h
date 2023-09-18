#pragma once
#include "CoreMinimal.h"
#include "PlatformUserIdMap.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FPlatformUserIdMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    FPlatformUserIdMap();
};

