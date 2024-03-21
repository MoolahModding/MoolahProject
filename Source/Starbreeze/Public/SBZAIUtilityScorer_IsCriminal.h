#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_IsCriminal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_IsCriminal : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIUtilityScorer_IsCriminal();
};

