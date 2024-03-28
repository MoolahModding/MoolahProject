#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_CanSeeEnemy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_CanSeeEnemy : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIUtilityScorer_CanSeeEnemy();
};

