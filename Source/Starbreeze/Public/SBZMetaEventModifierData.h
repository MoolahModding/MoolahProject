#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaEventModifierType.h"
#include "SBZMetaEventModifierData.generated.h"

USTRUCT(BlueprintType)
struct FSBZMetaEventModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMetaEventModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    STARBREEZE_API FSBZMetaEventModifierData();
};

