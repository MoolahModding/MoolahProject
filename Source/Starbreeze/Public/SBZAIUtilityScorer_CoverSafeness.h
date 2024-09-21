#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_CoverSafeness.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAIUtilityScorer_CoverSafeness : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CoverBBKey;
    
public:
    USBZAIUtilityScorer_CoverSafeness();

};

