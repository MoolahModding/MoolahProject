#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SBZAnimatedInteractionTagPerDuration.generated.h"

USTRUCT(BlueprintType)
struct FSBZAnimatedInteractionTagPerDuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DurationInterval;
    
    STARBREEZE_API FSBZAnimatedInteractionTagPerDuration();
};

