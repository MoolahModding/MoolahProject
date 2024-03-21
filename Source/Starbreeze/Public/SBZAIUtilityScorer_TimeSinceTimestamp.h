#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_TimeSinceTimestamp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAIUtilityScorer_TimeSinceTimestamp : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScoreTime;
    
public:
    USBZAIUtilityScorer_TimeSinceTimestamp();
};

