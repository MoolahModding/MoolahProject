#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutTimedEventData.generated.h"

USTRUCT(BlueprintType)
struct FSBZHoldOutTimedEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    STARBREEZE_API FSBZHoldOutTimedEventData();
};

