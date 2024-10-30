#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutDamageEventFilter.generated.h"

USTRUCT(BlueprintType)
struct FSBZHoldOutDamageEventFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttackerTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefeatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromQuerier;
    
public:
    STARBREEZE_API FSBZHoldOutDamageEventFilter();
};

