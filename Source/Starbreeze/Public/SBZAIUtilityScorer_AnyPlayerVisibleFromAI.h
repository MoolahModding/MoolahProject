#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_AnyPlayerVisibleFromAI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_AnyPlayerVisibleFromAI : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumRangeToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIntimidationRagne;
    
public:
    USBZAIUtilityScorer_AnyPlayerVisibleFromAI();

};

