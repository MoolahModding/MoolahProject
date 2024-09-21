#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_IsInCover.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_IsInCover : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentCoverPointBBKey;
    
public:
    USBZAIUtilityScorer_IsInCover();

};

