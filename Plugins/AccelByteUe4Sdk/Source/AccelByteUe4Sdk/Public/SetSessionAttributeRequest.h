#pragma once
#include "CoreMinimal.h"
#include "SetSessionAttributeRequest.generated.h"

USTRUCT(BlueprintType)
struct FSetSessionAttributeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ACCELBYTEUE4SDK_API FSetSessionAttributeRequest();
};

