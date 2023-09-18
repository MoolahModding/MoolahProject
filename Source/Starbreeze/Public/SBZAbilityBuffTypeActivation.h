#pragma once
#include "CoreMinimal.h"
#include "ESBZAbilityBuffTypeAction.h"
#include "ESBZPlayerAbilityBuffType.h"
#include "SBZAbilityBuffTypeActivation.generated.h"

USTRUCT(BlueprintType)
struct FSBZAbilityBuffTypeActivation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAbilityBuffTypeAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPlayerAbilityBuffType Type;
    
    STARBREEZE_API FSBZAbilityBuffTypeActivation();
};

