#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSetSessionAttributeRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSetSessionAttributeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Attributes;
    
    FAccelByteModelsSetSessionAttributeRequest();
};

