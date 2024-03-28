#pragma once
#include "CoreMinimal.h"
#include "ThirdPartyPlatformTokenData.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FThirdPartyPlatformTokenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform_token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Platform_token_expires_at;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Sand_box_id;
    
    FThirdPartyPlatformTokenData();
};

