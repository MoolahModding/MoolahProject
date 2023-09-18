#pragma once
#include "CoreMinimal.h"
#include "SBZLifeActionAnimationTagsRandomizer.h"
#include "SBZLifeActionRandomAnimationTagsPicker.generated.h"

USTRUCT(BlueprintType)
struct FSBZLifeActionRandomAnimationTagsPicker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZLifeActionAnimationTagsRandomizer> AnimationTagsRandomizers;
    
public:
    STARBREEZE_API FSBZLifeActionRandomAnimationTagsPicker();
};

