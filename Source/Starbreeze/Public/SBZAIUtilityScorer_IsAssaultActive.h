#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_IsAssaultActive.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_IsAssaultActive : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PhasesToCheck;
    
public:
    USBZAIUtilityScorer_IsAssaultActive();
};

