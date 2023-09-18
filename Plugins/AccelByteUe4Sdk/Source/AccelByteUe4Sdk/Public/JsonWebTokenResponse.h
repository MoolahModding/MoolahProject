#pragma once
#include "CoreMinimal.h"
#include "JsonWebTokenResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FJsonWebTokenResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Jwt_token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Session_id;
    
    FJsonWebTokenResponse();
};

