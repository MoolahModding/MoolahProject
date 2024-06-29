#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_PlayerDefeatState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_PlayerDefeatState : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIUtilityScorer_PlayerDefeatState();

};

