#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_HasTakenDamage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_HasTakenDamage : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDamage;
    
public:
    USBZAIUtilityScorer_HasTakenDamage();
};

