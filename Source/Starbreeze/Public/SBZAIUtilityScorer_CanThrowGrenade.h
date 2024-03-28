#pragma once
#include "CoreMinimal.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_CanThrowGrenade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_CanThrowGrenade : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumEnemyDistance;
    
public:
    USBZAIUtilityScorer_CanThrowGrenade();
};

