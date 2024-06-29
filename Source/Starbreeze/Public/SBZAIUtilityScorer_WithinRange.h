#pragma once
#include "CoreMinimal.h"
#include "ESBZRangeTestTargetType.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_WithinRange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_WithinRange : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRangeTestTargetType Target;
    
public:
    USBZAIUtilityScorer_WithinRange();

};

