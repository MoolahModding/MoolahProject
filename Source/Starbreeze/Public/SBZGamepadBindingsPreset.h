#pragma once
#include "CoreMinimal.h"
#include "SBZGamepadBinding.h"
#include "SBZGamepadBindingsPreset.generated.h"

USTRUCT(BlueprintType)
struct FSBZGamepadBindingsPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameLocalized;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGamepadBinding> Bindings;
    
    STARBREEZE_API FSBZGamepadBindingsPreset();
};

