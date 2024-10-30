#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIUtilityScorer.h"
#include "SBZAIUtilityScorer_PawnType.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZAIUtilityScorer_PawnType : public USBZAIUtilityScorer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TypeTag;
    
public:
    USBZAIUtilityScorer_PawnType();

};

