#pragma once
#include "CoreMinimal.h"
#include "SBZLifeActionAnimationTags.h"
#include "SBZLifeActionAnimationTagsRandomizer.generated.h"

USTRUCT(BlueprintType)
struct FSBZLifeActionAnimationTagsRandomizer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLifeActionAnimationTags> AnimationTags;
    
public:
    STARBREEZE_API FSBZLifeActionAnimationTagsRandomizer();
};

