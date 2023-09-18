#pragma once
#include "CoreMinimal.h"
#include "GetSessionAttributeRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetSessionAttributeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    ACCELBYTEUE4SDK_API FGetSessionAttributeRequest();
};

