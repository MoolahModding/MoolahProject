#pragma once
#include "CoreMinimal.h"
#include "RefreshTokenRequest.generated.h"

USTRUCT(BlueprintType)
struct FRefreshTokenRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccessToken;
    
    ACCELBYTEUE4SDK_API FRefreshTokenRequest();
};

