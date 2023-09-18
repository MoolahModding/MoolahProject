#pragma once
#include "CoreMinimal.h"
#include "DataInputValidation.h"
#include "InputValidation.generated.h"

USTRUCT(BlueprintType)
struct FInputValidation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataInputValidation> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    ACCELBYTEUE4SDK_API FInputValidation();
};

