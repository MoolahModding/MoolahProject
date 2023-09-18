#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZCharacterStance.h"
#include "SBZAllowedStanceTransition.generated.h"

USTRUCT(BlueprintType)
struct FSBZAllowedStanceTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCharacterStance PreviousStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCharacterStance CurrentStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockingTags;
    
    STARBREEZE_API FSBZAllowedStanceTransition();
};

