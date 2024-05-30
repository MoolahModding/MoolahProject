#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_DistanceToActor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_DistanceToActor : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange DistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIUtilityScorer_DistanceToActor();

};

