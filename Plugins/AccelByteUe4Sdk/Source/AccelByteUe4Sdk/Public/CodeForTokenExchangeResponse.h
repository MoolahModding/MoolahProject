#pragma once
#include "CoreMinimal.h"
#include "CodeForTokenExchangeResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FCodeForTokenExchangeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    FCodeForTokenExchangeResponse();
};

