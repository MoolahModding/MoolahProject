#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SBZInputActionKeyboardBinding.generated.h"

USTRUCT(BlueprintType)
struct FSBZInputActionKeyboardBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeySecondary;
    
    STARBREEZE_API FSBZInputActionKeyboardBinding();
};

