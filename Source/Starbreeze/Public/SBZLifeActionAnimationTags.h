#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZLifeActionAnimationTags.generated.h"

USTRUCT(BlueprintType)
struct FSBZLifeActionAnimationTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EnterAnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExitAnimationTag;
    
    STARBREEZE_API FSBZLifeActionAnimationTags();
};

