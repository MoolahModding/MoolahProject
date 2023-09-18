#pragma once
#include "CoreMinimal.h"
#include "UpdateEmailRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FUpdateEmailRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmailAddress;
    
    FUpdateEmailRequest();
};

