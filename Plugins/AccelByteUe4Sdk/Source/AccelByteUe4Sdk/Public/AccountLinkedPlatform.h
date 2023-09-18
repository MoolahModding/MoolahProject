#pragma once
#include "CoreMinimal.h"
#include "AccountLinkedPlatform.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccountLinkedPlatform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformUserId;
    
    FAccountLinkedPlatform();
};

