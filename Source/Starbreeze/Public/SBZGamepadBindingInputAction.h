#pragma once
#include "CoreMinimal.h"
#include "SBZGamepadBindingInputAction.generated.h"

USTRUCT(BlueprintType)
struct FSBZGamepadBindingInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    STARBREEZE_API FSBZGamepadBindingInputAction();
};

