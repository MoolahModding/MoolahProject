#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_HeistState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_HeistState : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowedStates;
    
public:
    USBZAIUtilityScorer_HeistState();

};

