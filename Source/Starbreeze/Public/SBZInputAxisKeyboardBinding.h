#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SBZInputAxisKeyboardBinding.generated.h"

USTRUCT(BlueprintType)
struct FSBZInputAxisKeyboardBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeySecondary;
    
    STARBREEZE_API FSBZInputAxisKeyboardBinding();
};

