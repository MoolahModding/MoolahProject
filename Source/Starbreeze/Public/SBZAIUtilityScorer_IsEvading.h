#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_IsEvading.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_IsEvading : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bonus;
    
public:
    USBZAIUtilityScorer_IsEvading();
};

