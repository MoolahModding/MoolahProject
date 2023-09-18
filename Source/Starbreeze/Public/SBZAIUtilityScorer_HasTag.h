#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_HasTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_HasTag : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
public:
    USBZAIUtilityScorer_HasTag();

};

