#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelSpayLoadURL.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelSpayLoadURL {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Url;
    
    FAccelByteModelSpayLoadURL();
};

