#pragma once
#include "CoreMinimal.h"
#include "GeneratedOneTimeCode.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FGeneratedOneTimeCode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OneTimeLinkCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OneTimeLinkURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Exp;
    
    FGeneratedOneTimeCode();
};

