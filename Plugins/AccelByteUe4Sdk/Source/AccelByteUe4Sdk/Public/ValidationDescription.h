#pragma once
#include "CoreMinimal.h"
#include "ValidationDescription.generated.h"

USTRUCT(BlueprintType)
struct FValidationDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Message;
    
    ACCELBYTEUE4SDK_API FValidationDescription();
};

