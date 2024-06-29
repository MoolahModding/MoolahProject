#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ESBZAnimatedInteractionStartType.h"
#include "ESBZAnimationScalePlayRateType.h"
#include "SBZAnimatedInteractionTagPerDuration.h"
#include "SBZAnimatedInteractionData.generated.h"

UCLASS(Blueprintable)
class USBZAnimatedInteractionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAnimatedInteractionStartType StartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAnimationScalePlayRateType PlayRateScaleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAnimatedInteractionTagPerDuration> AnimatedInteractionTagPerDurations;
    
    USBZAnimatedInteractionData();

};

