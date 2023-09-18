#pragma once
#include "CoreMinimal.h"
#include "ResetPasswordRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FResetPasswordRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmailAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewPassword;
    
    FResetPasswordRequest();
};

