#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutDamageEventFilter.h"
#include "SBZHoldOutDamageEventData.generated.h"

USTRUCT(BlueprintType)
struct FSBZHoldOutDamageEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHoldOutDamageEventFilter Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> TagsPerVictimType;
    
    STARBREEZE_API FSBZHoldOutDamageEventData();
};

