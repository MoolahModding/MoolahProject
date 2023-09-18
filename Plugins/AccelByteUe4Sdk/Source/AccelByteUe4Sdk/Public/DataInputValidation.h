#pragma once
#include "CoreMinimal.h"
#include "Validation.h"
#include "DataInputValidation.generated.h"

USTRUCT(BlueprintType)
struct FDataInputValidation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Field;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValidation Validation;
    
    ACCELBYTEUE4SDK_API FDataInputValidation();
};

